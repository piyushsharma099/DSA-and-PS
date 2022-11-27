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
// Deletion in between the nodes 
struct node *Delete_in_between(struct node *head , int index){
    struct node *p=head;
    struct node *p1=head->next;
    for(int i=0 ; i<index-1 ; i++){
        p=p->next;
        p1=p1->next;
    }
    p->next=p1->next;
    free(p1);
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
    cout<<endl<<"After Deletion in between the nodes "<<endl;
    head=Delete_in_between(head,1);
    Traversal(head);
}