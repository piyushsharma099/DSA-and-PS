#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    while(n!=0){
        if(n%2==0){
            n=n/2;
            c++;
        }
        else{
            n=n-1;
            c++;
        }
    }
    cout<<c;
    
    
}