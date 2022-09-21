#include<iostream>
using namespace std;
int fun(int a , int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return a;
    }
    else{
        return a*fun(a,n-1);
    }
}
int main(){
    int a,n,ans;
    cout<<"enter the number :- ";
    cin>>a;
    cout<<"enter the power :- ";
    cin>>n;
    ans=fun(a,n);
    cout<<ans;
}