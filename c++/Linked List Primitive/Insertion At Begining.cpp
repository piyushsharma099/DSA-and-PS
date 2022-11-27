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
// insert at begining 
struct node *insert_beg(struct node *head , int data){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->next=head;
    p->data=data;
    return p;
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
    cout<<endl<<"After inserting at begining "<<endl;
    head=insert_beg(head,5);
    Traversal(head);
}