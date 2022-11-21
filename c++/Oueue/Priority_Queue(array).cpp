#include<bits/stdc++.h>
using namespace std;
int n;
void insertion(int *a, int i, int x){
    for(int j=(n-1) ; j>=i ; j--){
        a[j+1]=a[j];
    }
    a[i]=x;
    n++;
}
void deletion(int *a , int i){
    for(int j=i+1 ; j<=(n-1) ; j++){
        a[j-1]=a[j];
    }
    n=n-1;
}
void PQInsertion(int *a, int x){
    int i=0;
    while(i<n && x>=a[i]){
        i++;
    }
    insertion(a,i,x);
}
int PQDeletion(int *a){
    int x=a[0];
    deletion(a,0);
    return x;
}
int main(){
    n=0;
    int a[100];
    PQInsertion(a,10);
    PQInsertion(a,15);
    PQInsertion(a,50);
    PQInsertion(a,20);    
    PQInsertion(a,25);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    PQDeletion(a);
    PQDeletion(a);
    PQDeletion(a);
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}