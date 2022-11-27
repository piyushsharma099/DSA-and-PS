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
void Bubble_sort(){
    struct node *p;
    struct node *q;
    int n=count();
    for(int i=0;i<n;i++){
      p=START;
      q=p->next;
        for(int j=0;j<n-1-i;j++){
            if((p->info)>(q->info)){  
              int x=p->info;
              p->info=(q->info);
              (q->info)=x;
            }
            q=q->next;
            p=p->next;
        }
    }
}
int main(){
    START=NULL;
    ins_beg(10);
    ins_beg(20);
    ins_beg(11);
    ins_beg(2);
    ins_beg(50);
    Taverse();
    Bubble_sort();
    Taverse();
}
