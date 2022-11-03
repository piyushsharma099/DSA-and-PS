#include<bits/stdc++.h>
using namespace std;
struct Employees{
    char na[20];
    int sa;
    int hwpw;
};
int main(){
    Employees st[100];
    int n;
    cout<<"How many Employees :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of Employees "<<i<<endl;
        cout<<"name : ";
        cin>>st[i].na;
        cout<<"Salary : ";
        cin>>st[i].sa;
        cout<<"Hours of work per day : ";
        cin>>st[i].hwpw;
    }
    for(int i=0 ; i<=n ; i++){
        st[i].sa+=50;
    }
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of Employees "<<i<<endl;
        cout<<"Name : ";
        cout<<st[i].na<<endl;
        cout<<"Salary : ";
        cout<<st[i].sa<<endl;
        cout<<"Hours of work per day : "<<endl;
        cout<<st[i].hwpw<<endl;
    }
    
}