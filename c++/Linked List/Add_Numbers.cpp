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
struct node*Reverse(struct node**l1){
    struct node*c,*p,*n;
    p=NULL;
    c=*l1;
    n=c->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    *(l1)=p;
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
struct node* Add_Numbers(struct node*l1,struct node*l2){
    struct node*l3=NULL;
    struct node*p,*q;
    int carry=0,total,sum;
    Reverse(&l1);
    Reverse(&l2);
    p=l1;
    q=l2;
    while(p!=NULL && q!=NULL){
        total=(p->info+q->info+carry);
        sum=total%10;
        carry=total/10;
        p=p->next;
        q=q->next;
        Insert_Beg(&l3,sum);
    }
    while(p!=NULL){
        total=(p->info+carry);
        sum=total%10;
        carry=total/10;
        p=p->next;
        Insert_Beg(&l3,sum);
    }
    while(q!=NULL){
        total=(q->info+carry);
        sum=total%10;
        carry=total/10;
        q=q->next;
        Insert_Beg(&l3,sum);
    }
    if(carry>0){
        Insert_Beg(&l3,carry);
    }
    Traversal(l3);
}
int main(){
    struct node*l1,*l2;
    l1=NULL;
    l2=NULL;
    Insert_End(&l1,4);
    Insert_End(&l1,5);
    Insert_End(&l1,8);
    Insert_End(&l1,6);
    Traversal(l1);
    Insert_End(&l2,2);
    Insert_End(&l2,4);
    Insert_End(&l2,9);
    Traversal(l2);
    Add_Numbers(l1,l2);
}