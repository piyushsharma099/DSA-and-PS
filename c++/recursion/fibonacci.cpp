#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main(){
    int n;
    cout<<"enter the number :- ";
    cin>>n;
    int i=0;
    while(i<n){
        cout<<i+1<<" "<<fib(i)<<" ";
        i++;
    }
    return 0;
}