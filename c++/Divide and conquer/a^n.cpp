#include <iostream>
using namespace std;
int fun(int a , int n){
    if (n==0){
        return 1;
    }
    if(n%2==0){
        return fun(a,n/2)*fun(a,n/2);
    }
    else{
        return a*fun(a,n/2)*fun(a,n/2);
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
