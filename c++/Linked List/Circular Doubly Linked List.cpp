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
    if((*l1)!=NULL){
        p->next=(*l1)->next;
        (*l1)->next=p;
        p->prev=(*l1);
        (*l1)->next->prev=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
        (*l1)->prev=p;
    }
    return 0;
}
struct node*Ins_End(struct node**l1,int x){
    struct node*p;
    p=getnode(l1);
    p->info=x;
    if((*l1)!=NULL){
        p->next=(*l1)->next->prev;
        (*l1)->next=p;
        (*l1)=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
        (*l1)->prev=p;
    }
    return 0;  
}
struct node*Ins_Aft(struct node**l1,struct node*p,int x){
    struct node*q,*r;
    if((*l1)==NULL){
        cout<<"VOID DELETION";
        exit(1);
    }
    else{
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
    }
    return 0;
}
int Del_Beg(struct node**l1){
    struct node*p;
    if((*l1)!=NULL){
        p=(*l1)->next;
        (*l1)->next=p->next;
        if((*l1)->next==(*l1)){
            (*l1)=NULL;
        }
        int x=p->info;
        free(p);
    return x;
    }
    else{
        cout<<"VOID DELETION"<<endl;
    }
    return 0;
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
int Del_Aft(struct node**l1,struct node**q){
    struct node*p;
    p=(*q)->next;
    (*q)->next=p->next;
    int x=p->info;
    free(p);
    return x;
}
void Traversal(struct node*l1){
    struct node*p;
    p=(l1);
    p=l1->next;
    while(p!=l1){
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
    Del_Aft(&l1,&r);
    //
    Traversal(l1);
}