#include <bits/stdc++.h>
using namespace std;
void prefix(string s1){
    for(int i=0 ; i<=s1.length() ; i++){
        for(int j=s1.length()-i ; j<s1.length() ; j++){
             cout<<s1[j];
        }
        cout<<endl;
    }
    
}
int main(){
    string s1,s2;
    cout<<"enter string 1 :- ";
    getline(cin,s1);
    prefix(s1);
}