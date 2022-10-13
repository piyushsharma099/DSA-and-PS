#include<bits/stdc++.h>
using namespace std;
int partition(int a[] , int low , int high){
    int i=low , j=high+1 ;
    int pivot=a[low];
    int temp=0;
    do{
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
            temp=a[j];
            a[j]=a[low];
            a[low]=temp;
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
	int n;
	cout<<"Enter the number of element :- ";
	cin>>n;
 	int a[n+1];
 	cout<<"Enter the elements :- ";
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
    a[n]=INT_MAX;
 	Quick_Sort(a, 0, n-1);
	cout<<"Sorted array :-";
	for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}