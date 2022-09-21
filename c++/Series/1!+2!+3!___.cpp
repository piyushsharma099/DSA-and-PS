#include<iostream>
using namespace std;
int main(){
    int n,s=0,f=1;
    cin>>n;
    for(int i=1 ; i<n ; i++){
        f=f*i;
        if(i%2==0){
            s=s-f;
        }
        else{
            s=s+f;
        }
    }
    cout<<s;
}