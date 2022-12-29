#include<bits/stdc++.h>
#include "ll.h"
using namespace std;
void Delete_kth(struct node**l1,int n){
    struct node*p,*q;
    p=(*l1);
    q=(*l1);
    n=n+1;
    while(n--){
        p=p->next;
    }
    while(p!=NULL){
        p=p->next;
        q=q->next;
    }
    Delete_After(&q);
    Traversal((*l1));
}
int main(){
    struct node*l1;
    l1=NULL;
    int n;
    Insert_End(&l1,1);
    Insert_End(&l1,2);
    Insert_End(&l1,3);
    Insert_End(&l1,4);
    Insert_End(&l1,5);
    Insert_End(&l1,6);
    //
    cout<<"Enter the Node to Delete from last :- ";
    cin>>n;
    //
    Traversal(l1);
    //
    Delete_kth(&l1,n);
}

// GFG solution 
//###############################
// Node*p,*q;
//         p=(head);
//         q=(head);
//         while(n--){
//             if(p!=NULL){
//                 p=p->next;
//             }
//             else{
//                 return -1;
//             }
//         }
//         while(p!=NULL){
//             p=p->next;
//             q=q->next;
//         }
//         return q->data;