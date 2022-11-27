#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
void count_nodes(struct node*p){
    int  c1=0,c2=0;
    while(p!=NULL){
        if((p->info)%2==0){
            c1++;
        }
        else{
            c2++;
        }
        p=p->next;
    }
    cout<<"Even Information Nodes are :- "<<c1<<endl;
    cout<<"Odd Information Nodes are :- "<<c2<<endl;
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
    third->info=6;
    third->next=fourth;
    fourth->info=4;
    fourth->next=NULL;
    count_nodes(head);
}