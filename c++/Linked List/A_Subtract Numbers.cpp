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
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
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
struct node* addzeros(struct node**l1,struct node**l2){
    if(count(l1)>count(l2)){
        int x=count(l1)-count(l2);
        while(x--){
            Insert_Beg(l2,0);
        }
    }
    else if(count(l1)<count(l2)){
        int x=count(l2)-count(l1);
        while(x--){
            Insert_Beg(l1,0);
        }
    }
    else{
        return 0;
    }
    return 0;
}
bool Greater(struct node**l1,struct node**l2){
    struct node*p,*q;
    p=*l1;
    q=*l2;
    if(count(l1)>count(l2)){
        return true;
    }
    else if(count(l1)<count(l2)){
        return false;
    }
    else{
        while(p!=NULL && q!=NULL){
            if(p->info>q->info){
                return true;
            }
            else if(p->info<q->info){
                return false;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
    }
    return 0;
}
struct node*sub_number(struct node**l1,struct node**l2){
    struct node*p,*q,*r;
    r=NULL;
    int diff,bor=0;
    int x=Greater(&(*l1),&(*l2));
    addzeros(&(*l1),&(*l2));
    Reverse(&(*l1));
    Reverse(&(*l2));
    p=(*l1);
    q=(*l2);
    while(p!=NULL && q!=NULL){
        if(x==1){
            if(p->info<q->info){
                diff=10+(p->info-q->info)-bor;
                bor=1;
                Insert_Beg(&r,diff);
            }
            else{
                diff=(p->info-q->info)-bor;
                bor=0;
                Insert_Beg(&r,diff);
            }
        }
        else{
            if(q->info<p->info){
                diff=10+(q->info-p->info)-bor;
                bor=1;
                Insert_Beg(&r,diff);
            }
            else{
                diff=(q->info-p->info)-bor;
                bor=0;
                Insert_Beg(&r,diff);
            }
        }
        p=p->next;
        q=q->next;
    }
    Traversal(r);
    return 0;
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
    sub_number(&l1,&l2);
}