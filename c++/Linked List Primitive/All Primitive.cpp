#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
//tarversing the link list
void Traversal(struct node*p){
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
}
// insert at begining 
struct node *insert_beg(struct node *head , int info){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->next=head;
    p->info=info;
    return p;
} 
// insertion in Between
struct node *insert_ind(struct node *head , int info , int index){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    struct node *p1=head;
    int i=0;
    while(i!=index-1){
        p1=p1->next;
        i++;
    }
    p->info=info;
    p->next=p1->next;
    p1->next=p;
    return head;
}
// insert at the end 
struct node *insert_end(struct node *head , int info){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->info=info;
    struct node *p1=head;
    while(p1->next!=NULL){
        p1=p1->next;
    }
    p1->next=p;
    p->next=NULL;
    return head;
}
// insertion after a node
struct node *insert_after(struct node *head , struct node *prevnode , int info){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->info=info;
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
    head->info=1;
    head->next=second;
    second->info=2;
    second->next=third;
    third->info=3;
    third->next=fourth;
    fourth->info=4;
    fourth->next=NULL;
    Traversal(head);
    cout<<endl<<"After inserting at begining "<<endl;
    head=insert_beg(head,5);
    Traversal(head);
    cout<<endl<<"After inserting in Between "<<endl;
    head=insert_ind(head,5,3);
    Traversal(head);
    cout<<endl<<"After inserting at the End "<<endl;
    head=insert_end(head,5);
    Traversal(head);
    cout<<endl<<"link list after inserting after a node "<<endl;
    head=insert_after(head,second,9);
    Traversal(head);
}