#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int c=0,temp;
    cout<<"enter the string :- ";
    getline(cin,a);
    for(int i=0; i<=a[i]; i++){
        if(a[i]==' '){
            c++;
        }
    } 
    int i=0;
    while(c<0){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    cout<<a;
}  
