#include<bits/stdc++.h>
using namespace std;
int w[100][100], d[100][100];
int main(){
    int n;
    cout<<"Enter Number of Vertices :- ";
    cin>>n;
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
            else{
                d[i][j]=0;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<n ; k++){
                d[j][k]=min(d[j][k] , d[j][i]+d[i][k]);
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