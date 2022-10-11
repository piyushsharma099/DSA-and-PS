#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0;
    char n[20];
    string m;
    gets(n);
    while(n[i]!='\0'){
        i++;
    }
    for(int j=i-1 ; j>=0 ; j-- ){
        m+=n[j];
    }
    cout<<m;
}