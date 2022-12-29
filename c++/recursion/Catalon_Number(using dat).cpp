#include<bits/stdc++.h>
using namespace std;
int catalon_no(long long n){
    long long k;
    long long a[n+1];
    a[0]=1;
    a[1]=1;
    for(long long k=2 ; k<=n ; k++){
        a[k]=0;
        for(long long i=0 ; i<k ; i++){
            a[k]+=(a[k-1-i]*a[i]);
        }
    }
    return a[n];   
}
int main(){
    long long n;
    cin>>n;
    long long ans=catalon_no(n);
    cout<<ans;
}