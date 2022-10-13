#include<bits/stdc++.h>
using namespace std;
int partition(int a[] , int low , int high){
    int x=low+(rand()% high+1);
    swap(a[low],a[x]);
    int i=low , j=high+1 ;
    int pivot=a[low];
    do{
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
         if(i<j){
            swap(a[i],a[j]);
        }
    }while(i<j);
    swap(a[j],a[low]);
        return j;
}
int Quick_Sort(int a[] , int low , int high){
    if(low<high){
        int j=partition(a,low,high);
        Quick_Sort(a, low, j-1);
        Quick_Sort(a, j+1, high);

    }
    return 0;
}
int main(){
	int n, i;
	cout<<"Enter the number of element :- ";
	cin>>n;
 	int a[n+1];
 	cout<<"Enter the elements :- ";
	for(i = 0; i < n; i++){
		cin>>a[i];
	}
    a[n]=INT_MAX;
 	Quick_Sort(a, 0, n-1);
	cout<<"Sorted array :-";
	for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
}