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
void Pattern(struct node**l1){
    struct node*r,*q;
    int s=0;
    r=(*l1)->next;
    while(r!=(*l1)){
        s+=r->info;
        r=r->next;
    }
    s=s+r->info;
    q=(*l1)->next;
    while(q!=(*l1)){
        q->info=s-(q->info);
        q=q->next;
    }
    q->info=s-(q->info);
    Traversal((*l1));
}
int main(){
    struct node*l1;
    l1=NULL;
    Ins_End(&l1,1);
    Ins_End(&l1,2);
    Ins_End(&l1,3);
    Ins_End(&l1,4);
    Ins_End(&l1,5);
    Ins_End(&l1,6);
    //
    Traversal(l1);
    //
    Pattern(&l1);
}