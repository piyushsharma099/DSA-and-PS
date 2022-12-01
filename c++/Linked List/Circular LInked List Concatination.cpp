#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node*getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node*Insert_Beg(struct node**l1 , int x){
    struct node*p,*q;
    p=getnode(l1);
    p->info=x;
    if((*l1)!=NULL){
        p->next=(*l1)->next;
        (*l1)->next=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
    }
    return 0;
}
struct node*Ins_End(struct node**l1 , int x){
    struct node*p;
    p=getnode(l1);
    p->info=x;
    if((*l1)!=NULL){
        p->next=(*l1)->next;
        (*l1)->next=p;
        (*l1)=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
    }
    return 0;   
}
struct node*Inst_Aft(struct node**l1 , int x){
    struct node*q,*p;
    q=*l1;
    if(q==NULL){
        cout<<"Void Insertion";
        exit(1);
    }
    else{
        p=getnode(l1);
        p->info=x;
        p->next=q->next;
        q->next=p;
    }
    return 0;
}
int Del_Beg(struct node**l1){
    struct node*p;
    p=(*l1)->next;
    (*l1)->next=p->next;
    if((*l1)->next==(*l1)){
        (*l1)=NULL;
    }
    int x=p->info;
    free(p);
    return x;
}
int Del_End(struct node**l1){
    struct node*q,*p;
    q=(*l1);
    p=(*l1)->next;
    if((*l1)->next==(*l1)){
        (*l1)=NULL;
    }
    else{
        while(p->next!=(*l1)){
            p=p->next;
        }
        p->next=(*l1)->next;
        (*l1)=p;
    }
    int x=q->info;
    free(q);
    return x;
}
int Del_Aft(struct node**q){
    struct node*p;
    p=(*q)->next;
    (*q)->next=p->next;
    int x=p->info;
    free(p);
    return x;
}
struct node*Traversal(struct node*l1){
    struct node*p;
    p=l1->next;
    while(p!=l1){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info;
    cout<<endl;
    return 0;
}
struct node*concat(struct node**l1,struct node**l2){
    struct node*q;
    q=(*l2)->next;
    (*l2)->next=(*l1)->next;
    (*l1)->next=q;
    return 0;
}
int main(){
    struct node*l1,*l2;
    l1=NULL;
    l2=NULL;
    // List 1
    Ins_End(&l1,1);
    Ins_End(&l1,2);
    Ins_End(&l1,3);
    Ins_End(&l1,4);
    Ins_End(&l1,5);
    Ins_End(&l1,6);
    // list 2
    Ins_End(&l2,7);
    Ins_End(&l2,8);
    Ins_End(&l2,9);
    Ins_End(&l2,10);
    Ins_End(&l2,11);
    Ins_End(&l2,12);
    //
    concat(&l1,&l2);
    Traversal(l2);
    //
}