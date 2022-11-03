#include<iostream>
using namespace std;
void fib(int n){
    int i;
    int f[n];
    f[0]=0;
    f[1]=1;
    for(i=2 ; i<n ; i++){
        f[i]=f[i-1]+f[i-2];
    }
    // for(i=0 ; i<n ; i++){
    //     cout<<f[i]<<" ";
    // }
    cout<<f[n-1];
}
int main(){
    int n;
    // cout<<"enter the number :- ";
    cin>>n;
    fib(n);
    return 0;
}