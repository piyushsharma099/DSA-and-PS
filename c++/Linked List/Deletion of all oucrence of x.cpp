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
int Delete_Beg(struct node**list){
    struct node *temp=*list;
    int x;
    (*list)=(*list)->next;
    x=temp->info;
    free(temp);
    return x;
}
int Delete_After(struct node**list){
    struct node *p,*q;
    int x;
    p=*list;
    if(p!=NULL && p->next!=NULL){
        q=p->next;
        p->next=q->next;
        x=q->info;
        free(q);
        return x;
    }
    else{
        exit(1);
    }
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
struct node*Delete(struct node**l1 , int x){
    struct node*p,*q;
    q=NULL;
    p=*l1;
    if(q==NULL){
        if(p->info==x){
            Delete_Beg(&p);
            p=p->next;
        }
    }
    // q=*l1;
    // p=p->next;
    // while(p!=NULL){
    //     if(p->info==x){
    //         Delete_After(&p);
    //         p=p->next;
    //         q=q->next;
    //     }
    //     p=p->next;
    //     q=q->next;
    // }
    Traversal(p);
    return 0;
}
int main(){
    struct node*l1;
    l1=NULL;
    Insert_End(&l1,2);
    Insert_End(&l1,2);
    Insert_End(&l1,3);
    Insert_End(&l1,4);
    Insert_End(&l1,5);
    Insert_End(&l1,2);
    Insert_End(&l1,2);
    int x;
    cin>>x;
    Delete(&l1,x);
}