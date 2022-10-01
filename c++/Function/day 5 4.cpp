#include<bits/stdc++.h>  
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0 ; i<(n/2) ; i++){
        cout<<(2*i+1)<<" ";
    }
    for(int j=(n/2)-1 ; j>0 ; j--){
        cout<<2*j<<" ";
    }
}