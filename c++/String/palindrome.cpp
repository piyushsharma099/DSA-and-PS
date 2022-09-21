#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cout<<"enter the string :- ";
    getline(cin,a);
    int l=a.length();
    for(int i=l-1 ; i>=0 ; i-- ){
        b+=a[i];
    }
    if(a==b){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}