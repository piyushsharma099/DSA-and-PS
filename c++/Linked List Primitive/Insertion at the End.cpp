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
// insert at the end 
struct node *insert_end(struct node *head , int data){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    struct node *p1=head;
    while(p1->next!=NULL){
        p1=p1->next;
    }
    p1->next=p;
    p->next=NULL;
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
    cout<<endl<<"After inserting at the End "<<endl;
    head=insert_end(head,5);
    Traversal(head);
}