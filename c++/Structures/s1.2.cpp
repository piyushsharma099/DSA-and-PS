#include<bits/stdc++.h>
using namespace std;
struct students{
    string na;
    int rn;
    int ma;
    int age;
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
    }
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cout<<st[i].na<<endl;
        cout<<"Roll number : ";
        cout<<st[i].rn<<endl;
        cout<<"marks : ";
        cout<<st[i].ma<<endl;
        cout<<"age : ";
        cout<<st[i].age<<endl;
    }
    
}