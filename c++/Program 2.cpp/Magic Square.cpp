#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20][20];
    int n,i,j;
    cin>>n;
    a[i][j]={0};
    a[n/2][0]=1;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            while(i!=n*n){
                if(a[i][j]==0){
                    a[i-1][j+1]+=a[n/2][0]=1;
                }
                else{
                    a[i-1][j]+=a[n/2][0]=1;
                }
            }
            if(i>n){
                i=0;
                a[i-1][0]+=a[n/2][0]=1;
            }
            else if(j>n){
                j=0;
                a[0][j-1]+=a[n/2][0]=1;
            }
        }
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout<<a[i][j];
        }
    }
}