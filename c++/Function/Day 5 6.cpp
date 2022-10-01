#include<bits/stdc++.h>  
using namespace std;
void func(int a[],int n){
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int i=0 , j=i+1 ;
    while(j<n){
        swap(a[i],a[j]);
        i+=2;
        j+=2;
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    func(a,n);
    
}