#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,k,n,c=0,r;
    cout<<"enter two numbers :- ";
    cin>>a>>b;
    cout<<"enter kth digit :- ";
    cin>>k;
    n=pow(a,b);
    while(n>0 && c<k){
        r=n%10;
        n=n/10;
        c++;
        if(c==k){
            cout<<r;
        }
    }
}