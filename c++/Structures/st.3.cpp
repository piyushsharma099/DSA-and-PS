#include<bits/stdc++.h>
using namespace std;
struct students{
    char na[20];
    int rn;
    int ma;
    int age;
    char ad[20];
};
int main(){
    students st[100];
    int n;
    cout<<"How many students :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cin>>st[i].na;
        cout<<"Roll number : ";
        cin>>st[i].rn;
        cout<<"Enter the marks : ";
        cin>>st[i].ma;
        cout<<"Enter your age : ";
        cin>>st[i].age;
        cout<<"Enter the address :- ";
        cin>>st[i].ad;
    }
    for(int i=1 ; i<n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"Name : ";
        cout<<st[i].na<<endl;
        cout<<"Roll Number : ";
        cout<<st[i].rn<<endl;
        cout<<"Marks : ";
        cout<<st[i].ma;
        cout<<"Age : "<<endl;
        cout<<st[i].age<<endl;
        cout<<"Address :- ";
        cout<<st[i].ad<<endl;
    }
    
}