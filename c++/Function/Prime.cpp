#include<bits/stdtr1c++.h>
using namespace std;
void prime(int n){
    int c=0;
    for(int i=2 ; i<=n/2 ; i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==1){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

}
int main(){
    int n;
    cin>>n;
    prime(n);
}