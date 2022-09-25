#include<bits/stdc++.h>
using namespace std;
void t_o_h(int n ,char s, char m, char d){
    if(n==0){
        return ;
    }
    else{
        t_o_h(n-1 ,s, m, d);
        cout<<"transfer dik "<<n<<" from "<<s<<" to "<<d<<endl;
        t_o_h(n-1,m,s,d);
    }
}
int main(){
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    t_o_h(n,'s','m','d');
}