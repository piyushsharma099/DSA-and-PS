#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
void count_nodes(struct node*p){
    int  c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    cout<<"Nodes are :- "<<c;
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
    count_nodes(head);
}