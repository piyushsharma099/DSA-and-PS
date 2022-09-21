#include <bits/stdc++.h>
using namespace std;
int t_digits(int n){
    if (n==0){
        return 1;
    }
    int c=0;
    while (n!=0) {
        n=n/10;
        c++;
    }
    return c;
}
int sum(int n){
    int s=0 ,r ;
    while(n>0){
        r=n%10;    
        s=s+r;    
        n=n/10;
    }
    return s;
}

int main(){
    int n,ans,i,sum1;
    cout<<"enter the number :- ";
    cin>>n;
    ans=t_digits(n);
    
    
}