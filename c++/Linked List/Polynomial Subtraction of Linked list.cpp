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
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->coef<<"x^"<<t->exp<<" + ";
        t=t->next;
    }
    cout<<endl;
}
struct node* Polynomial_addition(struct node*p1,struct node*p2){
    struct node*p3=NULL;
    struct node *p,*q;
    p=p1;
    q=p2;
    while(p!=NULL && q!=NULL){
        if(p->exp==q->exp){
            Insert_End(&p3,p->coef+q->coef,p->exp);
            p=p->next;
            q=q->next;
        }
        else{
            if(p->exp>q->exp){
                Insert_End(&p3,p->coef,p->exp);
                p=p->next;
            }
            else{
                Insert_End(&p3,q->coef,q->exp);
                q=q->next;
            }
        }
    }
    while(p!=NULL){
            Insert_End(&p3,p->coef,p->exp);
            p=p->next;
        }
    while(q!=NULL){
        Insert_End(&p3,q->coef,q->exp);
        q=q->next;
    }
    return p3;
}
struct node* Polynomial_subtraction(struct node*p1,struct node*p2){
    struct node*q;
    struct node*p3=NULL;
    q=p2;
    while(q!=NULL){
        q->coef=(-1)*(q->coef);
        q=q->next;
    }
    p3=Polynomial_addition(p1,q);
    return p3;
}
int main(){
    struct node*l1;
    l1=NULL;
    struct node*l2;
    l2=NULL;
    struct node*l3;
    l3=NULL;
    Insert_End(&l1,4,2);
    Insert_End(&l1,10,3);
    Insert_End(&l1,2,4);
    Insert_End(&l1,9,5);
    Insert_End(&l1,20,6);
    Traversal(l1);
    Insert_End(&l2,2,2);
    Insert_End(&l2,3,3);
    Insert_End(&l2,4,4);
    Insert_End(&l2,5,5);
    Insert_End(&l2,6,6);
    Traversal(l2);
    l3=Polynomial_subtraction(l1,l2);
    Traversal(l3);
}