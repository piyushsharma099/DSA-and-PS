#include<bits/stdc++.h>
#include "ll.h"
using namespace std;
struct node*p_swap(struct node**l1){
    struct node*p,*q;
    p=(*l1)->next;
    q=(*l1);
    while(p!=NULL && p->next!=NULL){
        swap(q->info,p->info);
        p=p->next->next;
        q=q->next->next;
    }
    if(p->next==NULL){
        swap(q->info,p->info);
    }
    return 0;
}
int main(){
    struct node*l1;
    l1=NULL;
    Insert_End(&l1,10);
    Insert_End(&l1,20);
    Insert_End(&l1,30);
    Insert_End(&l1,40);
    Insert_End(&l1,50);
    Insert_End(&l1,60);
    Insert_End(&l1,70);
    Insert_End(&l1,80);
    Traversal(l1);
    p_swap(&l1);
    Traversal(l1);
}