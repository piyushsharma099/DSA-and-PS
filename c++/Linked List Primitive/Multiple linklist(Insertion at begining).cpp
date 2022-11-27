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
} 
//tarversing the link list
void Traversal(struct node*START){
    struct node*t;
    t=START;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
}
int main(){
    struct node*START;
    START=NULL;
    cout<<endl<<"inserting at begining "<<endl;
    insert_beg(&(START),1);
    insert_beg(&(START),2);
    insert_beg(&(START),3);
    insert_beg(&(START),4);
    insert_beg(&(START),5);
    insert_beg(&(START),6);
    Traversal(START);
}