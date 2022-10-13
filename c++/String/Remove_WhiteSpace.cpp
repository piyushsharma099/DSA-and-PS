#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int c=0;
    cout<<"enter the string :- ";
    getline(cin,a);
    cout<<a<<endl;
    for(int i=0; i<=a[i]; i++){
        if(a[i]==' '){
            a[i]=a[i]-' ';
        }
        else if(a[i]!=' '){
            break;
        }
    }
    for(int i=a.length()-1; i>=0; i--){
        if(a[i]==' '){
            a[i]=a[i]-' ';
        }
        else if(a[i]!=' '){
            break;
        }
    }
cout<<a;
}
