#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
void Traversal(struct node*p){
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
        
    }
}
//Reversing Linklist
struct node*Reverse(struct node*head){
    struct node *p=NULL;
    struct node *c=head;
    struct node *n=NULL;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->info=1;
    head->next=second;
    second->info=2;
    second->next=third;
    third->info=3;
    third->next=fourth;
    fourth->info=4;
    fourth->next=NULL;
    Traversal(head);
    head=Reverse(head);
    Traversal(head);
}