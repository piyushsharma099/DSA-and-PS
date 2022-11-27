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
}