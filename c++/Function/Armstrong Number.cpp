#include <iostream>  
using namespace std;
void Armstrong_No(int n){
    int r,s=0;
    int temp=n;    
    while(n>0){    
        r=n%10;    
        s=s+(r*r*r);    
        n=n/10;    
    }    
    if(temp==s){
        cout<<"Armstrong Number"<<endl;
    }       
    else{  
        cout<<"Not an Armstrong Number"<<endl;
    } 
}  
int main(){  
    int n;   
    cout<<"Enter the Number :- ";    
    cin>>n;    
    Armstrong_No(n);
}  