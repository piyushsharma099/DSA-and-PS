#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node*getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node*Ins_End(struct node**l1 , int x){
    struct node*p;
    p=getnode(l1);
    p->info=x;
    if((*l1)!=NULL){
        p->next=(*l1)->next;
        (*l1)->next=p;
        (*l1)=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
    }
    return 0;   
}
int Del_Beg(struct node**l1){
    struct node*p;
    p=(*l1)->next;
    (*l1)->next=p->next;
    if((*l1)->next==(*l1)){
        (*l1)=NULL;
    }
    int x=p->info;
    free(p);
    return x;
}
int Del_End(struct node**l1){
    struct node*q,*p;
    q=(*l1);
    p=(*l1)->next;
    if((*l1)->next==(*l1)){
        (*l1)=NULL;
    }
    else{
        while(p->next!=(*l1)){
            p=p->next;
        }
        p->next=(*l1)->next;
        (*l1)=p;
    }
    int x=q->info;
    free(q);
    return x;
}
int Del_Aft(struct node**q){
    struct node*p;
    p=(*q)->next;
    (*q)->next=p->next;
    int x=p->info;
    free(p);
    return x;
}
struct node*Traversal(struct node*l1){
    struct node*p;
    p=l1->next;
    while(p!=l1){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info;
    cout<<endl;
    return 0;
}
// void Josephus(struct node**l1, int n, int x){
//     struct node*q;
//     q=(*l1)->next;
//     n=n-1;
//     while((n)--){
//         while((x)--){
//             cout<<q->info<<" ";
//             q=q->next;
//             Del_Aft(&q);
//         }
//     }
//     Traversal((*l1));
// }
void Josephus(struct node**l1, int x){
    struct node*p,*q;
    p=(*l1)->next;
    q=NULL;
    int c=1;
    while(p->next!=p){
        while(c!=x){
            q=p;
            c=c+1;
            p=p->next;
        }
        p=p->next;
        Del_Aft(&q);
        c=1;
    }
    Traversal(p);
}
int main(){
    struct node*l1;
    l1=NULL;
    int n,x;
    cin>>n>>x;
    for(int i=1 ; i<=n ; i++){
        Ins_End(&l1,i);
    }
    Traversal(l1);
    Josephus(&l1,x);
}