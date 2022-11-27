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
int count(){
    struct node*p;
    p=START;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
void Linear_Search(int x){
    struct node*p;
    p=START;
    int n=count();
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(p->info==x){
            cout<<"Element Found at "<<c+1<<" position";
            break;
        }
        c++;
        p=p->next;
    }

}
int main(){
    START=NULL;
    ins_beg(10);
    ins_beg(20);
    ins_beg(11);
    ins_beg(2);
    ins_beg(50);
    Linear_Search(11);
}
