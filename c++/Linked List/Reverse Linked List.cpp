#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node * getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node *Insert_Beg(struct node**list,int x){
    struct node *temp;
    temp=getnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
    return 0;
} 
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
// struct node*Reverse(struct node**l1,struct node**l2){
//     struct node *p,*q;
//     p=*l1;
//     while(p!=NULL){
//         Insert_Beg((l2),p->info);
//         p=p->next;
//     }
//     return 0;
// }
struct node*Reverse(struct node**l1){
    struct node*c,*p,*n;
    p=NULL;
    c=*l1;
    n=c->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    *(l1)=p;
    return 0;
}
int main(){
    struct node*l1;
    l1=NULL;
    Insert_Beg(&(l1),1);
    Insert_Beg(&(l1),2);
    Insert_Beg(&(l1),3);
    Insert_Beg(&(l1),4);
    Insert_Beg(&(l1),5);
    Insert_Beg(&(l1),6);
    Traversal(l1);
    Reverse(&(l1));
    Traversal(l1);
}