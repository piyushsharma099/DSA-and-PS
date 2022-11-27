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
// #######################################################################
// insert at begining 
struct node *Insert_Beg(struct node**list,int x){
    struct node *temp;
    temp=getnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
    return 0;
} 
// #######################################################################
// Insert After
struct node *Insert_After(struct node**list , int x){
    // struct node *temp,*p;
    // temp=*list;
    // while(temp!=NULL){
    //     if(temp->info==x){
    //         break;
    //     }
    //     else{
    //         temp=temp->next;
    //     }
    //     p=getnode(list);
    //     p->info=x;
    //     p->next=temp->next;
    //     temp->next=p;
    // }

    struct node *q;
    q=getnode(list);
    q->info=x;
    q->next=(*list)->next;
    (*list)->next=q;
    return 0;
}
// #######################################################################
// Insert End
struct node *Insert_End(struct node**list,int x){
    struct node *temp,*p;
    temp=*list;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p=getnode(list);
    p->info=x;
    p->next=NULL;
    temp->next=p;
    return 0;
}
// #######################################################################
// Deletion in begining 
int Delete_Beg(struct node**list){
    struct node *temp=*list;
    int x;
    (*list)=(*list)->next;
    x=temp->info;
    free(temp);
    return x;
}
// #######################################################################
// Delete After the node
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
// #######################################################################
// Deletion At the end
int Delete_End(struct node**list){
    struct node *p,*q;
    p=*list;
    q=NULL;
    int x;
    while(p->next!= NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}
// #######################################################################
//tarversing the link list
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
}