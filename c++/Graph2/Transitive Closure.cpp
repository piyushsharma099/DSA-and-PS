#include<bits/stdc++.h>
using namespace std;
int n;
int m[10][10];
int t[10][10];
int a[10][10];
void matrix_multiply(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<n ; k++){
                t[i][j]+=t[i][k]*a[k][j];
            }
        }
    }
}
void matrix_sum(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            m[i][j]=m[i][j]+t[i][j];
        }
    }
}
int main(){
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
            m[i][j]=a[i][j];
            t[i][j]=a[i][j];
        }
    }
    for(int i=1 ; i<n-1 ; i++){
        matrix_multiply(n);
        matrix_sum(n); 
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(m[i][j]!=0){
                m[i][j]=1;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}