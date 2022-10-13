#include <bits/stdc++.h>
using namespace std;
int palindrome(string s, int st, int en){
    if(en-st==1 || st==en){
        return 1;
    }
    else{
        if(s[st]==s[en]){
            return palindrome(s,st+1,en-1); 
        }
        else{
            return 0;
        }
    }
}
int main(){
   string s;
   cin>>s;
   int n=s.length();
   if(palindrome(s, 0, n-1)){
       cout<<"Yes"<<endl;
   }
   else{
       cout<<"No"<<endl;
   }
   return 0;
}