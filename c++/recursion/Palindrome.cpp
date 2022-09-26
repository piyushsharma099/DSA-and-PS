#include <bits/stdc++.h>
using namespace std;
void Palindrome(string a){
    string b;
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
int main(){
    string a;
    cout<<"enter the string :- ";
    getline(cin,a);
    Palindrome(a);
}