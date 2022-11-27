#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node*START;
struct node*getnode(){
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void ins_beg(int x){
    struct node*p;
    p=getnode();
    p->info=x;
    p->next=START;
    START=p;
}
void Taverse(){
    struct node*p;
    p=START;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}
void count(){
    struct node*p;
    p=START;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    cout<<c<<endl;
}
void e_o(){
    struct node*p;
    p=START;
    int c1=0,c2=0;
    while(p!=NULL){
        if((p->info)%2==0){
            c1++;
        }
        else{
            c2++;
        }
        p=p->next;
    }
    cout<<c1<<" Even Terms"<<endl;
    cout<<c2<<" Odd Terms"<<endl;
}
int main(){
    START=NULL;
    ins_beg(10);
    ins_beg(20);
    ins_beg(11);
    ins_beg(2);
    ins_beg(50);
    Taverse();
    count();
    e_o();
}
