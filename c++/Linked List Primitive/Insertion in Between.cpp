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
// insertion in Between
struct node *insert_ind(struct node *head , int data , int index){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    struct node *p1=head;
    int i=0;
    while(i!=index-1){
        p1=p1->next;
        i++;
    }
    p->data=data;
    p->next=p1->next;
    p1->next=p;
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
    cout<<endl<<"After inserting in Between "<<endl;
    head=insert_ind(head,5,3);
    Traversal(head);
}