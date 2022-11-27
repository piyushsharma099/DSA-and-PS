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
// Deletion of node with the given value 
struct node *Delete_val(struct node *head , int value){
    struct node *p=head;
    struct node *p1=head->next;
    while(p1->next!=NULL && p1->data!=value){
        p=p->next;
        p1=p1->next;
    }
    if(p1->data==value){
        p->next=p1->next;
        free(p1);
    }
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
    cout<<endl<<"After Deletion of given node "<<endl;
    head=Delete_val(head,3);
    Traversal(head);
}