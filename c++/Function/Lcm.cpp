#include<iostream>
using namespace std;
void lcm(int a,int b){
    int temp1,temp2;
    temp1=a;
    temp2=b;
    while(temp1!=temp2){
        if(temp1 < temp2){
        temp1=temp1+a;
        }
        else{
            temp2=temp2+b;
        }
    }

    cout<<"lcm of "<<a<<" and "<<b<<" is "<<temp1;
}

int main(){
    int a,b;
    cout<<"Enter number 1 :- ";
    cin>>a;
    cout<<"Enter number 2 :- ";
    cin>>b;
    lcm(a,b);
}

