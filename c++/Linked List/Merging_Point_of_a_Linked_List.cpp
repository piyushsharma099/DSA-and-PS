#include<bits/stdc++.h>
#include"ll.h"
using namespace std;

// #######################################################################################
//_____________________(((       O(n^2) Complexity       )))______________________________
//########################################################################################

// int Merging_Point(struct node**l1,struct node**l2){
//     struct node*p,*q;
//     p=(*l1);
//     q=(*l2);
//     if(p==NULL || q==NULL){       
//         return 0;
//     }
//     while(p!=NULL){
//         q=(*l2);
//         while(q!=NULL){
//             if(p->info==q->info){
//                 return p->info;
//             }
//             else{
//                 q=q->next;
//             }
//         }
//         p=p->next;
//     }
// }
int Merging_Point(struct node**l1,struct node**l2){
    struct node*p,*q;
    p=(*l1);
    q=(*l2);
    if(p==NULL || q==NULL){
        return 0;
    }
    while (p->info!=q->info) {
        p=p->next;
        q=q->next;
        if(p->info==q->info){
            return p->info;
        }
        if(p->next==NULL){
            p=(*l2);
        }
        if (q->next==NULL){
            q=(*l1);
        }
    }
    return p->info;
}
int main(){
    struct node*l1;
    struct node*l2;
    l1=NULL;
    l2=NULL;
    // List 1;
    Insert_End(&l1,10);
    Insert_End(&l1,12);
    Insert_End(&l1,30);
    Insert_End(&l1,40);
    Insert_End(&l1,50);
    // List 2
    Insert_End(&l2,12);
    Insert_End(&l2,16);
    Insert_End(&l2,17);
    Insert_End(&l2,100);
    int ans = Merging_Point(&l1,&l2);
    cout<<ans;
}