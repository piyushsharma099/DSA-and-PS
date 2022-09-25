#include<iostream>
using namespace std;
int rev(int n){
    if(n<10){
        return n;
    }
    else{
        cout<<n%10;
        return(rev(n/10));
    }
}
int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<rev(n);
}