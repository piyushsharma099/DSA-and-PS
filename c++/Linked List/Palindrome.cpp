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
int func(struct node**l1,struct node**l2){
    struct node*r,*q;
    q=*l2;
    r=*l1;
    while(r!=NULL){
        if(q->info==r->info){
            r=r->next;
            q=q->next;
        }
        else{
            return false;
        }
    }
    return true;
}
void Palindrome_Check(struct node**l1,struct node**l2){
    struct node *p,*q,*r;
    p=*l1;
    q=*l2;
    while(p!=NULL){
        Insert_Beg((l2),p->info);
        p=p->next;
    }
    int x=func(&(*l1),&(*l2));
    cout<<x;
}
// struct node*Reverse(struct node**l1){
//     struct node*c,*p,*n;
//     p=NULL;
//     c=*l1;
//     n=c->next;
//     while(c!=NULL){
//         c->next=p;
//         p=c;
//         c=n;
//         if(n!=NULL){
//             n=n->next;
//         }
//     }
//     *(l1)=p;
//     return 0;
// }
int main(){
    struct node*l1,*l2;
    l1=NULL;
    l2=NULL;
    Insert_Beg(&(l1),1);
    Insert_Beg(&(l1),2);
    Insert_Beg(&(l1),3);
    Insert_Beg(&(l1),3);
    Insert_Beg(&(l1),2);
    Insert_Beg(&(l1),1);
    Traversal(l1);
    Palindrome_Check(&(l1),&(l2));
}