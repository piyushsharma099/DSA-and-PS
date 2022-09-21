#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the sentence :- ";
    getline(cin,s);
    int l=s.length();
    for(int i=0 ; i<l ; i++){
        if((s[i]>'a')&&(s[i]<'z')){
            s[i]=s[i]-32;
        }
        else if((s[i]>'A')&&(s[i]<'Z')){
            s[i]=s[i]+32;
        }
    }
    cout<<s;
    
}

/*GEEKS FOR GEEKS METHOD*/
// int main(){
//     string s1 = "abcde";
//     transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//     cout<<s1<<endl;
// }