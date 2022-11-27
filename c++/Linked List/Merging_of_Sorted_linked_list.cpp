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
    struct node *Q;
    Q=getnode(list);
    Q->info=x;
    Q->next=*list;
    *list=Q;
    return 0;
} 
struct node *Insert_End(struct node**list,int x){
    struct node *Q,*p;
    Q=*list;
    if(Q==NULL){
        Insert_Beg(&(*list),x);
    }
    else{
        while(Q->next!=NULL){
            Q=Q->next;
        }
        p=getnode(list);
        p->info=x;
        p->next=NULL;
        Q->next=p;
    }
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
        Insert_End(&q,x);
    }
    return 0;
}
void merge(struct node*l1 , struct node*l2){
    struct node*l3;
    struct node*p,*q;
    p=l1;
    q=l2;
    l3=NULL;
    while(p!=NULL && q!=NULL){
        if(p->info<q->info){
            Insert_End(&l3,p->info);
            p=p->next;
        }
        else{
            Insert_End(&l3,q->info);
            q=q->next;
        }
    }
    while(p!=NULL){
        Insert_End(&l3,p->info);
        p=p->next;
    }
    while(q!=NULL){
        Insert_End(&l3,q->info);
        q=q->next;
    }
    Traversal(l3);
}
int main(){
    struct node*l1;
    l1=NULL;
    struct node*l2;
    l2=NULL;
    struct node*l3;
    l3=NULL;
    // 1st list
    int a[5]={10,5,2,15,17};
    for(int i=0 ; i<=4 ; i++){
        orderedInsertion(&l1,a[i]);
    }
    // 2nd list
    int b[6]={5,3,6,2,8,11};
    for(int i=0 ; i<=5 ; i++){
        orderedInsertion(&l2,b[i]);
    }
    Traversal(l1);
    Traversal(l2);
    merge(l1,l2);
}