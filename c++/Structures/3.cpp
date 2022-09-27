#include<bits/stdc++.h>
using namespace std;
struct students{
    char na[20];
    int rn;
    int ma;
    int age;
    char ad[30];
};
int main(){
    students st[100];
    int n;
    cout<<"How many students :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cin>>st[i].na[20];
        cout<<"Roll number : ";
        cin>>st[i].rn;
        cout<<"Enter the marks : ";
        cin>>st[i].ma;
        cout<<"Enter your age : ";
        cin>>st[i].age;
        cout<<"Enter your address :";
    }
    for(int i=0 ; i<n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cout<<st[i].na[20];
        cout<<"Roll number : ";
        cout<<st[i].rn;
        cout<<"Enter the marks : ";
        cout<<st[i].ma;
        cout<<"Enter your age : ";
        cout<<st[i].age;
        cout<<"Enter your address :";
    }
    
}