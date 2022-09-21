#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x,sign=1;
    cin>>n>>x;
    float s=x ,f=1,p=x;
    for(i=1 ; i<=n ; i++){
        f=f*2*i*(2*-1);
        p=p*x*x;
        s=s+sign*float(p/f);
        sign=sign*(-1)
    }
    cout<<s;
}