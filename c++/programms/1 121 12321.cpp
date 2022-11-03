#include<bits/stdc++.h>
using namespace std;
int pattern(int n){
    int i=1,j,k,flag=0;
    while(i<=n){
        for(j=1 ; j<=i ; j++){
            cout<<j;
            if(j==n){
                flag=0;
            }
        }
        if(flag==0){
            for(k=i-1 ; k>=1 ; k--){
                cout<<k;
            }
        }
        cout<<" ";
        i++;
    }

}
int main(){
    int n;
    cin>>n;
    cout<<pattern(n);
}