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
        cout<<"Enter Maths Marks : ";
        cin>>st[i].rn;
        cout<<"Enter Chem Mraks : ";
        cin>>st[i].ma;
        cout<<"Enter Phy Marks : ";
        cin>>st[i].age;
    }
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cout<<st[i].na<<endl;
        cout<<"Maths Marks : ";
        cout<<st[i].rn<<endl;
        cout<<"Chem Mraks : ";
        cout<<st[i].ma<<endl;
        cout<<"Enter Phy Marks : ";
        cout<<st[i].age<<endl;
    }
    
}