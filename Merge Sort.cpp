#include <iostream>
using namespace std;
void Merge_Sort(int *a, int l, int h){
	int m;
	if (l < h){
		m=(l+h)/2;
		Merge_Sort(a, l, m);
		Merge_Sort(a, m+1, h);
		Merge(a, l, h, m);
	}
}
void Merge(int *a, int l, int h, int m){
	int i=1,k=0,j,temp[h-l+1];
	j = m + 1;
	while (i <= m && j <= h){
		if (a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= m){
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= h)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = l; i <= h; i++)
	{
		a[i] = temp[i-l];
	}
}
int main(){
	int n, i;
	cout<<"Enter the number of element :-";
	cin>>n;
 	int arr[n];
	for(i = 0; i < n; i++){
		cout<<"Enter the elements :- ";
		cin>>arr[i];
	}
 
	Merge_Sort(arr, 0, n-1);
	cout<<"Sorted array :-";
	for (i = 0; i < n; i++)
        cout<<arr[i];
}