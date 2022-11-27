#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
//tarversing the link list
void Traversal(struct node*p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
// insertion after a node
struct node *insert_after(struct node *head , struct node *prevnode , int data){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=prevnode->next;
    prevnode->next=p;
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
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    Traversal(head);
    cout<<endl<<"link list after inserting after a node "<<endl;
    head=insert_after(head,second,9);
    Traversal(head);
}