#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements ";
    for(int i=0 ; i<n; i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter the size of array ";
    cin>>m;
    int b[m];
    cout<<"enter the elements ";
    for(int i=0 ; i<m; i++){
        cin>>b[i];
    }
    cout<<"{ ";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<a[i]<<"X"<<b[j]<<" ";
        }
    }
    cout<<"}";
}