#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node*START;
struct node * getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// insert at begining 
struct node *insert_beg(int x){
    struct node *temp;
    temp=getnode();
    temp->info=x;
    temp->next=START;
    START=temp;
    return 0;
} 
// Deletion in begining 
int Delete_beg(){
    struct node *temp=START;
    int x;
    START=START->next;
    x=temp->info;
    free(temp);
    return x;
} 
//push
int push(int x){
    insert_beg(x);
    return 0;
}
//pop
int pop(){
    int x=Delete_beg();
    return x;
}
//tarversing the link list
void Traversal(){
    struct node*t;
    t=START;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    START=NULL;
    cout<<endl<<"Stack Using Linklist "<<endl;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    Traversal();
    pop();
    pop();
    pop();
    Traversal();
}