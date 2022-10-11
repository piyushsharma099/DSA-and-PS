#include<bits/stdc++.h>
using namespace std;
struct students{
    string na;
    int rn;
    int age;
    string add;
};
void age_greater_14(struct students na,struct students age,int n){
    for(int i=1 ; i<n ; i++){
        if(st[i].age>14){
            cout<<st[i].na<<" ";
        }
    }
}
void even_roll_number(struct students na,struct students age,int n){
    for(int i=1 ; i<n ; i++){
        if((st[i].age)%2==0){
            cout<<st[i].na<<" ";
        }
    }
}
void roll_no(struct students na,struct students age,int n,struct students rn,struct students add){
    cout<<"Enter the roll number of the student :- ";
    
}
int main(){
    students st[100];
    int n;
    cout<<"How many students :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cin>>st[i].na;
        cout<<"Enter Roll no. : ";
        cin>>st[i].rn;
        cout<<"Enter Age : ";
        cin>>st[i].age;
        cout<<"Enter Address : ";
        cin>>st[i].add;
    }
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cout<<st[i].na<<endl;
        cout<<"Maths Marks : ";
        cout<<st[i].rn<<endl;
        cout<<"Enter Phy Marks : ";
        cout<<st[i].age<<endl;
        cout<<"Chem Mraks : ";
        cout<<st[i].add<<endl;
    }
    cout<<"Students above 14 are :- ";
    age_greater_14(na,age,n);
    cout<<"Students having even roll number :- ";
    even_roll_number(na,age,n);
    roll_no(na,age,n,rn,add);
    
}