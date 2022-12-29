#include<bits/stdc++.h>
using namespace std;
int catalon_no(int n){
    if(n==0){
        return 1;
    }
    else {
        if(n==1){
            return 1;
        }
        else{
            int s=0;
            for(int i=0 ; i<n ; i++){
                s=s+catalon_no(n-1-i)*catalon_no(i);
            }
            return s;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int ans=catalon_no(n);
    cout<<ans;
}