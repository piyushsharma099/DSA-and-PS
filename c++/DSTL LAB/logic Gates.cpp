#include<bits/stdc++.h>
using namespace std;
void Not_Gate(int a , int b){
    cout<<"not a :- "<<(!a)<<endl;
    cout<<"not b :- "<<(!b);
}
void Or_Gate(int a , int b){
    cout<<"or :- "<<(a||b)<<endl;
}
void And_Gate(int a , int b){
    cout<<"and :- "<<(a&&b)<<endl;
}
int main(){
    int a,b;
    cout<<"Enter the value of a :- ";
    cin>>a;
    cout<<"Enter the value of b :- ";
    cin>>b;
    And_Gate(a,b);
    Or_Gate(a,b);
    Not_Gate(a,b);
    
}