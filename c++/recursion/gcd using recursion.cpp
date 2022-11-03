#include<iostream>
using namespace std;
int gcd(int a , int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b); // LCM(a,b)=(a*b)/GCD(a,b)
    }
}
int main(){
    int a,b;
    cout<<"enter number 1 :- ";
    cin>>a;
    cout<<"enter number 2 :- ";
    cin>>b;
    cout<<gcd(a,b);
}