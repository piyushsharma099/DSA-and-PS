#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    int a[10];
    cin>>t;
    while(t--){
        int p=1;
        cin>>n;
        for(int i=1 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i=1 ; i<n ; i++){
            p=p*a[i];
        }
        cout<<p<<endl;
    }
}