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
// Insert End
struct node *Insert_End(struct node**list,int x){
    struct node *temp,*p;
    temp=*list;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p=getnode(list);
    p->info=x;
    p->next=NULL;
    temp->next=p;
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
//Enqueue
int Enqueue(struct node**START,int x){
    Insert_End(START,x);
    return 0;
}
//Dequeue
int Dequeue(struct node**START){
    int x=Delete_beg(START);
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
    cout<<endl<<"Queue Using Linklist "<<endl;
    Enqueue(&START,1);
    Enqueue(&START,2);
    Enqueue(&START,3);
    Enqueue(&START,4);
    Enqueue(&START,5);
    Enqueue(&START,6);
    Traversal(START);
    cout<<Dequeue(&START)<<endl;
    cout<<Dequeue(&START)<<endl;
    cout<<Dequeue(&START)<<endl;
    Traversal(START);
}