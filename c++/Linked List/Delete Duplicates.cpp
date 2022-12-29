#include<bits/stdc++.h>
#include"ll.h"
using namespace std;
void duplicates(struct node**l1){
    struct node*p,*q,*r;
    p=(*l1);
    while(p!=NULL){
        q=p->next;
        r=p;
        while(q!=NULL){
        if(q->info==p->info){
            q=q->next;
            Delete_After(&r);
        }
        else{
            q=q->next;
            r=r->next;
        }
        }
        p=p->next;
    }
    Traversal((*l1));
}
int main(){
    struct node*l1;
    l1=NULL;
    Insert_End(&l1,1);
    Insert_End(&l1,2);
    Insert_End(&l1,1);
    Insert_End(&l1,2);
    Insert_End(&l1,3);
    Insert_End(&l1,4);
    Insert_End(&l1,3);
    Insert_End(&l1,5);
}