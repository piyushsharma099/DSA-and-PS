#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node * getnode(struct node**START){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// insert at begining 
struct node *insert_beg(struct node**START,int x){
    struct node *temp;
    temp=getnode(START);
    temp->info=x;
    temp->next=*START;
    *START=temp;
    return 0;
} 
// Deletion in begining 
int Delete_beg(struct node**START){
    struct node *temp=*START;
    int x;
    (*START)=(*START)->next;
    x=temp->info;
    free(temp);
    return x;
}
//push
int push(struct node**START,int x){
    insert_beg(&*START,x);
    return 0;
}
//pop
int pop(struct node**START){
    int x=Delete_beg(&*START);
    return x;
}
//tarversing the link list
void Traversal(struct node*START){
    struct node*t;
    t=START;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    struct node*START;
    START=NULL;
    cout<<endl<<"Stack Using Linklist "<<endl;
    push(&START,1);
    push(&START,2);
    push(&START,3);
    push(&START,4);
    push(&START,5);
    push(&START,6);
    Traversal(START);
    cout<<pop(&START)<<endl;
    cout<<pop(&START)<<endl;
    cout<<pop(&START)<<endl;
    Traversal(START);
}