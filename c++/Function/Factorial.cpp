#include<bits/stdc++.h>
using namespace std;
int Factorial(int n){
    int s=0,f=1;
    for(int i=1 ; i<=n ; i++){
        f=f*i;
        s=s+f;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<Factorial(n);
}