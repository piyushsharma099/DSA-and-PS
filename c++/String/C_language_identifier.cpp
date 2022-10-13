#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string :- ";
    getline(cin,s);
    int flag=0;
    if(s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z')){
        int i=1 ; 
        while(s[i]!='\0'){
            if(!(s[i]=='_' || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') || (s[i]=='$'))){
                flag=1;
                break;
            }
            else{
                i++;
            }
        }
        if(flag==1){
            cout<<"Invalid";
        }
        else{
            if(i>32){
                cout<<"Invalid";
            }
            cout<<"Valid";
        }

    }
    else{
        cout<<"Invalid";
    }
}