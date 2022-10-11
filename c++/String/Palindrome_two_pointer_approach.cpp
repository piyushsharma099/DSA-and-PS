#include <bits/stdc++.h>
using namespace std;
int main(){
    int f=0;
    string a;
    cout<<"enter the string :- ";
    getline(cin,a);
    int l=a.length();
    int i=i-1;
    int j=0;
    while(j<i){
        if(a[j]!=a[i]){
            f=1;
        }
        else{
            i--;
            j++;
        }
    }
    if(f==1){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}