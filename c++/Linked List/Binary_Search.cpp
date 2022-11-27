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
struct node *Insert_After(struct node**list , int x){
    struct node *q;
    q=getnode(list);
    q->info=x;
    q->next=(*list)->next;
    (*list)->next=q;
    return 0;
}
struct node *Insert_End(struct node**list,int x){
    struct node *temp,*p;
    temp=*list;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p=getnode(list);
    p->info=x;
    p->next=NULL;
    temp->next=p;
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
int middle_element(struct node**list){
    struct node*t,*r;
    t=*list;
    r=(*list);
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
    }
    return (t->info);
}
int Binary_Search(struct node**list , int x){
    struct node*p;
    p=*list;
    int mid;
    if(p!=NULL){
        mid=middle_element(list);
        if(x==mid){
            return mid;
        }
        else{
            if(x<mid){
                  
            }
        }
    }

}
int main(){
    struct node*l1,*p,*q;
    l1=NULL;
    Insert_Beg(&(l1),10);
    Insert_Beg(&(l1),12);
    Insert_Beg(&(l1),30);
    Insert_Beg(&(l1),14);
    Insert_Beg(&(l1),50);
    Insert_Beg(&(l1),16);
    Insert_Beg(&(l1),70);
    Insert_Beg(&(l1),18);
    Insert_Beg(&(l1),90);
}