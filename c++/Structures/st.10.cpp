#include<bits/stdc++.h>
using namespace std;
struct students{
    string na;
    int rn;
};
int main(){
    students st[100];
    int n;
    cout<<"How many customers :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of customers "<<i<<endl;
        cout<<"name : ";
        cin>>st[i].na;
        cout<<"balance : ";
        cin>>st[i].rn;
    }
    for(int i=1 ; i<=n ; i++){
        if(st[i].rn>=1000){
            st[i].rn+=100;
        }
    }
    for(int i=1 ; i<=n ; i++){
        cout<<"name : ";
        cout<<st[i].na;
        cout<<"balance : ";
        cout<<st[i].rn;
    }
    
}