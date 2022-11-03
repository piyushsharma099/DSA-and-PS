#include <bits/stdc++.h>
using namespace std;
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
    int n,ans;
    cout<<"enter the number :- ";
    cin>>n;
    ans=sum(n);
    if(ans<=9){
        cout<<ans;
    }
    else{
        cout<<sum(ans);
    }
}