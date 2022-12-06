#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node*prev;
    struct node*next;
};
struct node * getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node*Ins_Beg(struct node**l1,int x){
    struct node *p;
    p=getnode(&(*l1));
    p->info=x;
    p->prev=NULL;
    p->next=(*l1);
    if((*l1)!=NULL){
        (*l1)->prev=p;
    }
    (*l1)=p;
    return 0;
}
struct node*Ins_End(struct node**l1,int x){
    struct node*p,*q;
    p=(*l1);
    q=getnode(&(*l1));
    q->info=x;
    q->next=NULL;
    if((*l1)!=NULL){
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=q;
        q->prev=p;
    }
    else{
        q->prev=NULL;
        (*l1)=q;
    }
    return 0;
}
struct node*Ins_Aft(struct node**l1,struct node*p,int x){
    struct node*q,*r;
    q=getnode(&(*l1));
    q->info=x;
    r=p->next;
    p->next=q;
    q->prev=p;
    q->next=r;
    r->prev=q;
    if(r!=NULL){
        r->prev=q;
    }
    return 0;
}
struct node*Ins_Bef(struct node**l1,struct node*p,int x){
    struct node*q,*r;
    if(p==(*l1)){
        Ins_Beg(l1,x);
    }
    else{
        q=getnode(l1);
        q->info=x;
        r=p->prev;
        r->next=q;
        q->prev=r;
        q->next=p;
        p->prev=q;
    }
    return 0;
}
int Del_Beg(struct node**l1){
    struct node*p;
    if((*l1)!=NULL){
        p=(*l1);
        (*l1)=p->next;
        int x=p->info;
        free(p);
        if((*l1)!=NULL){
            (*l1)->prev=NULL;
        }
        return x;
    }
    else{
        cout<<"VOID DELETION"<<endl;
    }
    return 0;
}
int Del_End(struct node**l1){
    struct node*p,*q;
    p=(*l1);
    if((*l1)!=NULL){
        while(p->next!=NULL){
            p=p->next;
        }
        int x=p->info;
        q=p->prev;
        q->next=NULL;
        free(p);
        return x;
    }
    else{
        cout<<"VOID DELETION"<<endl;
    }
    return 0;
}
int Del_Aft(struct node**l1,struct node*p){
    struct node*q,*r;
    q=p->next;
    r=q->next;
    p->next=r;
    r->prev=p;
    int x=q->info;
    free(q);
    return x;
}
int Del_specific(struct node**l1,struct node*p){
    struct node*r,*q;
    q=p->prev;
    r=p->next;
    q->next=r;
    r->prev=p;
    int x=p->info;
    free(p);
    return x;
}
void Traversal(struct node*l1){
    struct node*p;
    p=(l1);
    while(p->next!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info;
    cout<<endl;
}
int main(){
    struct node*l1,*p,*q,*r,*t;
    l1=NULL;
    /////////////////////////////////////////////////////////////////////////////////////.
    cout<<endl<<endl<<"Insertion Operations"<<endl<<endl;
    /////////////////////////////////////////////////////////////////////////////////////.
    cout<<"Insert Begining"<<endl;
    Ins_Beg(&l1,1);
    Ins_Beg(&l1,2);
    Ins_Beg(&l1,3);
    Ins_Beg(&l1,4);
    Ins_Beg(&l1,5);
    //
    Traversal(l1);
    cout<<"Insert End"<<endl;
    Ins_End(&l1,10);
    Ins_End(&l1,20);
    Ins_End(&l1,30);
    //
    Traversal(l1);
    cout<<"Insert after (let say 4th node)"<<endl;
    p=l1;
    for(int i=0 ; i<3 ; i++){
        p=p->next;
    }
    Ins_Aft(&l1,p,100);
    //
    Traversal(l1);
    cout<<"Insert Before (let say 3rd node)"<<endl;
    q=l1;
    for(int i=0 ; i<2 ; i++){
        q=q->next;
    }
    Ins_Bef(&l1,q,200);
    //
    Traversal(l1);
    //
    /////////////////////////////////////////////////////////////////////////////////////.
    cout<<endl<<endl<<"Delete Operations "<<endl<<endl;
    /////////////////////////////////////////////////////////////////////////////////////.
    cout<<"Delete Begining"<<endl;
    Del_Beg(&l1);
    //
    Traversal(l1);
    //
    cout<<"Delete End"<<endl;
    Del_End(&l1);
    //
    Traversal(l1);
    //
    cout<<"Delete After (let say 5th node)"<<endl;
    r=l1;
    for(int i=0 ; i<4 ; i++){
        r=r->next;
    }
    Del_Aft(&l1,r);
    //
    Traversal(l1);
    //
    t=l1;
    cout<<"Delete Specific node (let say 4th node)"<<endl;
    for(int i=0 ; i<3 ; i++){
        t=t->next;
    }
    Del_specific(&l1,t);
    //
    Traversal(l1);
}