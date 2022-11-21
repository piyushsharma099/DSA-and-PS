#include<bits/stdc++.h>
using namespace std; 
int n;
void arrayInsert(int *a,int i,int x){
    for(int j=n-1; j>=i; j--){
        a[j+1]=a[j];
    }
    a[i]=x;
}
void arrayDelete(int *a){
    for(int i=0 ; i<n ; i++){
        a[i-1]=a[i];
    }
}
void EnQueue(int *a, int x){
    int i=0;
    while(i<n && x>=a[i]){
        i++;
    }
    arrayInsert(a,i,x);
    n++;
}
void Display(int *a){
    int i;
    for(int i=0 ;  i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int DeQueue(int *a){
    int x,i;
    x=a[n-1];
    n--;
    return x;
}
int main(){
    n=0;
    int a[100];
    EnQueue(a,2);
    EnQueue(a,10);
    EnQueue(a,8);
    EnQueue(a,6);
    EnQueue(a,4);
    EnQueue(a,12);
    Display(a);
    cout<<DeQueue(a);
}
