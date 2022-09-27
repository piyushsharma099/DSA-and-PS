#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int s=0;
    for(int i=1 ; i<=n ; i++){
        s=s+i;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}