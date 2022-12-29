#include<bits/stdc++.h>
#include"ll.h"
using namespace std;
void splitting(struct node**l1,struct node**l2,int x){
    struct node*p;
    struct node*q;
    p=(*l1)->next;
    x=x-2;
    while(x--){
        p=p->next;
    }
    (*l2)=p->next;
    p->next=NULL;
    Traversal((*l1));
    Traversal(*(l2));
}
int main(){
    struct node*l1;
    l1=NULL;
    struct node*l2;
    l2=NULL;
    Insert_End(&l1,1);
    Insert_End(&l1,2);
    Insert_End(&l1,3);
    Insert_End(&l1,4);
    Insert_End(&l1,5);
    Insert_End(&l1,6);
    Insert_End(&l1,7);
    Insert_End(&l1,8);
    Insert_End(&l1,9);
    Insert_End(&l1,10);
    //
    Traversal(l1);
    //
    int x;
    cout<<"Enter the node from where you want to split the list"<<endl;
    cin>>x;
    splitting(&l1,&l2,x);
}