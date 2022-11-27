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
struct node *Insert_After(struct node**list , int x){
    struct node *q;
    q=getnode(list);
    q->info=x;
    q->next=(*list)->next;
    (*list)->next=q;
    return 0;
}
struct node *Insert_End(struct node**list,int x){
    struct node *temp,*p;
    temp=*list;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p=getnode(list);
    p->info=x;
    p->next=NULL;
    temp->next=p;
    return 0;
}
int Delete_Beg(struct node**list){
    struct node *temp=*list;
    int x;
    (*list)=(*list)->next;
    x=temp->info;
    free(temp);
    return x;
}
int count(struct node**list){
    struct node*p;
    p=*list;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
struct node*orderedInsertion(struct node**list,int x){
    struct node*p,*q;
    p=*list;
    q=NULL;
    while(p!=NULL && x>=p->info){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        Insert_Beg(list,x);
    }
    else{
        Insert_After(&q,x);
    }
    return 0;
}
struct node*PQinsertion(struct node**list,int x){
    orderedInsertion(list,x);
    return 0;
}
int PQDeletion(struct node**list){
    int x=Delete_Beg(list);
    return x;
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
int main(){
    struct node*l1;
    l1=NULL;
    PQinsertion(&(l1),1);
    PQinsertion(&(l1),13);
    PQinsertion(&(l1),5);
    PQinsertion(&(l1),20);
    PQinsertion(&(l1),15);
    Traversal(l1); 
    PQinsertion(&(l1),10);
    Traversal(l1); 
    PQDeletion(&(l1));
    Traversal(l1); 
}