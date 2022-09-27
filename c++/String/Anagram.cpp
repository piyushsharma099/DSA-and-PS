#include <iostream>
using namespace std;
int main(){
    char str1[10]={'s','a','a','r','c'};
    char str2[10]={'a','r','c','s','a'};
    int i=0, j=0 , dat[25]={0};
    while(str1[i]!='\0'){
        dat[str1[i]]++;
        dat[str1[i]-'a']++;
        i++;
    }
    while(str2[j]!='\0'){
        dat[str2[j]='a']--;
        j++;
    }
    int flag=1;
    for(i=0 ; j<=25 ; i++){
        if(dat[i]==0){
            flag=0;
            break;
        }
        if(flag==1){
            cout<<"anagram";
        }
        else{
            cout<<"not anagram";
        }
    }
}
