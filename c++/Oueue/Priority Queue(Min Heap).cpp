#include<bits/stdc++.h>
using namespace std;
int n;
void MinHeapify(int *a , int i){
    while(2*i+1 < n-1){
        int l=2*i+1;
        int r=2*i+2;
        int min=l;
        if(r<=n-1){
            if(a[r]<a[l]){
                min=r;
            }
            if(a[min]<a[i]){
                swap(a[min],a[i]);
            }
            else{
                break;
            }
            i=min;
        }
    }
}
int PQDelete(int *a){
    int x=a[0];
    a[0]=a[n-1];
    n--;
    MinHeapify(a,0);
    return x;
}
void PQInsert(int *a , int data){
    a[n]=data;
    int x=n;
    int y=(n-1)/2;
    while(x>0 && a[x]<a[y]){
        swap(a[x],a[y]);
        x=y;
        y=(x-1)/2;
    }
    n++;
}
int main(){
    n=0;
    int a[100];
    PQInsert(a,5);
    PQInsert(a,20);
    PQInsert(a,17);
    PQInsert(a,16);
    PQInsert(a,25);
    PQInsert(a,15);
    PQInsert(a,10);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // 1st Deletion
    PQDelete(a);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // 2nd Deletion
    PQDelete(a);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}