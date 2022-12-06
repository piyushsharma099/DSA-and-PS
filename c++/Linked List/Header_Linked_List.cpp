#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node * getnode(struct node**head){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// #######################################################################
// Creating Header Node
struct node*create_linked_head(struct node*head){
    struct node*p;
    p=getnode(&head);
    head=p;
    head->info=0;
    head->next=NULL;
    return head;
}
// #######################################################################
// Insert After
struct node *Insert_After(struct node**head , int x){
    struct node *q;
    q=getnode(head);
    q->info=x;
    q->next=(*head)->next;
    (*head)->next=q;
    (*head)->info+=1;
    return 0;
}
// #######################################################################
// insert at begining 
struct node *Insert_Beg(struct node*head,int x){
    Insert_After(&head,x);
    head->info+=1;
} 
// #######################################################################
//tarversing the link head
void Traversal(struct node*head){
    struct node*t;
    t=head;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    struct node*l1,*head;
    l1=NULL;
    head=create_linked_head(l1);
    Insert_Beg(head,1);
    Insert_Beg(head,2);
    Insert_Beg(head,3);
    Insert_Beg(head,4);
}