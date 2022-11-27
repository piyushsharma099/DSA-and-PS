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
} 
//tarversing the link list
void Traversal(){
    struct node*t;
    t=START;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
}
int main(){
    START=NULL;
    cout<<endl<<"After inserting at begining "<<endl;
    insert_beg(1);
    insert_beg(2);
    insert_beg(3);
    insert_beg(4);
    insert_beg(5);
    insert_beg(6);
    Traversal();
}