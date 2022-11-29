#include<bits/stdc++.h>
using namespace std;
struct node{
    int coef;
    int exp;
    struct node *next;
};
struct node * getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node *Insert_Beg(struct node**list , int c , int e){
    struct node *Q;
    Q=getnode(list);
    Q->coef=c;
    Q->exp=e;
    Q->next=*list;
    *list=Q;
    return 0;
} 
struct node *Insert_End(struct node**list , int c , int e){
    struct node *Q,*p;
    Q=*list;
    if(Q==NULL){
        Insert_Beg(&(*list),c,e);
    }
    else{
        while(Q->next!=NULL){
            Q=Q->next;
        }
        p=getnode(list);
        p->coef=c;
        p->exp=e;
        p->next=NULL;
        Q->next=p;
    }
    return 0;
}
struct node *Insert_After(struct node**list , int c , int e){
    struct node *q;
    q=getnode(list);
    q->coef=c;
    q->coef=e;
    q->next=(*list)->next;
    (*list)->next=q;
    return 0;
}
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->coef<<"x^"<<t->exp<<" + ";
        t=t->next;
    }
    cout<<endl;
}
struct node*orderedInsertion(struct node**list,int c,int e){
    struct node*p,*q;
    p=*list;
    q=NULL;
    while(p!=NULL && e>=p->exp){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        Insert_Beg(list,p->coef,p->exp);
    }
    else{
        Insert_After(&q,p->coef,p->exp);
    }
    return 0;
}
struct node* Polynomial_Multiplication(struct node*p1,struct node*p2){
    struct node*p3=NULL;
    struct node *p,*q;
    q=p2;
    while(q!=NULL){
        p=p1;
        while(p!=NULL){
            orderedInsertion(&(p3),p->coef*p->coef,p->exp+q->exp);
            p=p->next;
        }
        q=q->next;
    }
    p=p3;
    while(p->next!=NULL){
        if(p->exp==(p->next)->exp){
            p->coef=p->coef+(p->next)->coef;
            Del_aft(p);
        }
        else{
            p=p->next;
        }
    }
    return p3;
}
int main(){
    struct node*l1;
    l1=NULL;
    struct node*l2;
    l2=NULL;
    struct node*l3;
    l3=NULL;
    Insert_End(&l1,2,2);
    Insert_End(&l1,3,3);
    Insert_End(&l1,4,4);
    Insert_End(&l1,5,5);
    Insert_End(&l1,6,6);
    Traversal(l1);
    Insert_End(&l2,2,2);
    Insert_End(&l2,3,3);
    Insert_End(&l2,4,4);
    Insert_End(&l2,5,5);
    Insert_End(&l2,6,6);
    Traversal(l2);
    l3=Polynomial_Multiplication(l1,l2);
    Traversal(l3);
}