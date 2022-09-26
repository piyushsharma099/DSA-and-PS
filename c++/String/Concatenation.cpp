#include <bits/stdc++.h>
using namespace std;
void Add(string s1, string s2){
    string s3;
    s3=s1+s2;
    cout<<s3;
}
int main(){
    string s1,s2;
    cout<<"enter string 1 :- ";
    getline(cin,s1);
    cout<<"enter string 2 :- ";
    getline(cin,s2);
    Add(s1,s2);
}