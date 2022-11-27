#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node * getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node *Insert_Beg(struct node**list,int x){
    struct node *temp;
    temp=getnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
    return 0;
} 
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
struct node*copy(struct node**l1,struct node**l2){
    struct node *p,*q;
    p=*l1;
    q=*l2;
    while(p!=NULL){
        q->info=p->info;
        p=p->next;
        q=q->next;
    }
    return 0;
}
int main(){
    struct node*l1;
    struct node*l2;
    l1=NULL;
    l2=NULL;
    Insert_Beg(&(l1),1);
    Insert_Beg(&(l1),2);
    Insert_Beg(&(l1),3);
    Insert_Beg(&(l1),4);
    Insert_Beg(&(l1),5);
    Insert_Beg(&(l1),6);
    Traversal(l1);
    copy(&(l1),&(l2));
    Traversal(l2);
}