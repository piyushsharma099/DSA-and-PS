#include<bits/stdc++.h>
using namespace std;
int power(int a , int b){
    int p=1;
    for(int i=0 ; i<b ; i++){
        p=p*a;
    }
    return p;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}