#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    int i=0;
    gets(s);
    int dat[25]={0};
    while(s[i]!='\0'){
        dat[s[i]-'a']++;
        i++;
    }
    for(int i=0 ; i<26 ; i++){
        if(dat[i]!=0){
            cout<< char('a'+i)<<" "<<dat[i];
        }
    }
}