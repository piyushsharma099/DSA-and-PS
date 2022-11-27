#include<bits/stdc++.h>
using namespace std;
struct student{
    int rn;
    char n[20];
    double pt;
};
void input(int n , struct student *p){
    for(int i=0 ; i<n ; i++){
        cout<<"Enter details of student "<<i+1<<" :- ";
        cin>>(p+i)->rn>>(p+i)->n>>(p+i)->pt;
    }
}
void output(int n , struct student *p){
    for(int i=0 ; i<n ; i++){
        cout<<(p+i)->rn<<" "<<(p+i)->n<<" "<<(p+i)->pt<<endl;
    }
}
int main(){
    int n;
    struct student *p;
    cout<<"Enter the number of enteries :- ";
    cin>>n;
    p=(struct student*)malloc(sizeof(struct student)*n);
    // struct student S;
    input(n,p);
    output(n,p);
}