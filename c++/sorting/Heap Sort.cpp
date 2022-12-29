#include<bits/stdc++.h>
using namespace std;
void MaxHeapify(int *a , int n , int i){
    int l=2*i+1;
    int r=2*i+2;
    int max=i;
    if(l<n && a[l]>a[max]){
        max=l;
    }
    if(r<n && a[r]>a[max]){
        max=r;
    }
    if(max!=i){
        swap(a[i],a[max]);
        MaxHeapify(a,n,max);
    }
}
void Build_Max_Heap(int *a, int n){
    for(int i=(n/2)-1 ; i>=0 ; i--){
        MaxHeapify(a,n,i);
    }
}
void Heap_Sort(int *a , int n){
    Build_Max_Heap(a,n);
    for(int j=n-1 ; j>0 ; j--){
        swap(a[0],a[j]);
        MaxHeapify(a,j,0);
    }
}
int main(){
    int n;
    cout<<"Enter Number Of Inputs :- ";
    cin>>n;
    int a[n];
    cout<<"Enter the Array Elements :- ";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    Heap_Sort(a,n);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}