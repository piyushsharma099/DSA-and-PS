#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20][20];
    int i , j , n;
    cout<<"enter n :- ";
    cin>>n;
    for(i=0  ; i<n; i++){
        for(j=0 ; j<n+1 ; j++){
            a[i][j]=0;
;        }
    }
    a[0][1]=1;
    for(i=1  ; i<n; i++){
    for(j=1 ; j<n+1 ; j++){
            if(a[i][j]!=0)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
;        
    }}
    for(i=0  ; i<n; i++){
        for(j=0 ; j<n-i ; j++){
            cout<<" ";
;        }

    for(i=0  ; i<n; i++){
        for(j=1 ; j<n+1 ; j++){
            cout<<a[i][j]<<" ";
;       }
        cout<<endl;
    }}
}
