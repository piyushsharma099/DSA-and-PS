#include<bits/stdc++.h>  
using namespace std;
void func(int a[],int n){
    int i=0 , j=n-1 ; 
    while(i<j){
        swap(a[i],a[j]);
        i+=2;
        j-=2;
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    func(a,n);
    
}