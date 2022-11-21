#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node * getnode(struct node**START){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// insert at begining 
struct node *insert_beg(struct node**START,int x){
    struct node *temp;
    temp=getnode(START);
    temp->info=x;
    temp->next=*START;
    *START=temp;
} 
// Deletion in begining 
int Delete_beg(struct node**START){
    struct node *temp=*START;
    int x;
    (*START)=(*START)->next;
    x=temp->info;
    free(temp);
    return x;
}
// Insert After
struct node *insert_after(struct node**START , int x){
    // struct node *temp,*p;
    // temp=*START;
    // while(temp!=NULL){
    //     if(temp->info==x){
    //         break;
    //     }
    //     else{
    //         temp=temp->next;
    //     }
    //     p=getnode(START);
    //     p->info=x;
    //     p->next=temp->next;
    //     temp->next=p;
    // }

    // if (*START == NULL) {
    //     break;
    // }
    struct node*temp,*p;
    temp=*START;
    p=getnode(START);
    temp->info = temp->info;
    temp->next = p->next;
    p->next = temp;
}
//insertion in Queue
void PQInsert(struct node**START,int x){
    struct node*p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL && x>p->info){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        insert_beg(START,x);
    }
    else{
        insert_after(&q,x);
    }
}
//Deletion in Queue
int PQDelete(struct node**START){
    int x=Delete_beg(START);
    return x;
}
//tarversing the link list
void Traversal(struct node*START){
    struct node*t;
    t=START;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    struct node*START;
    START=NULL;
    PQInsert(&START,20);
    PQInsert(&START,12);
    PQInsert(&START,10);
    PQInsert(&START,15);
    PQInsert(&START,50);
    Traversal(START);
}