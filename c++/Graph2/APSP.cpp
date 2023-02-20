#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Vertices :- ";
    cin>>n;
    int w[n][n], d[n][n]={0};
    cout<<"Enter the Weight Matrix "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>w[i][j];
            if(i!=j){
                if(w[i][j]==0){
                    d[i][j]=INT_MAX/2;
                }
                else{
                    d[i][j]=w[i][j];
                }
            }
        }
    }
    for(int k=0 ; k<n ; k++){
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}