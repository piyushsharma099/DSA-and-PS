#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[n][n];
    cout<<"Enter Number of Vertices :- ";
    cin>>n;
    cout<<"Enter the Adjacenecy Matrix "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<n ; k++){
                a[j][k]=a[j][k] || (a[j][i] && a[i][k]);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}