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
struct node*concatination(struct node**l1 , struct node**l2){
    struct node *p;
    p=*l1;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*l2;
    return 0;
}
int main(){
    struct node*l1;
    struct node*l2;
    l1=NULL;
    l2=NULL;
    //l2=NULL;
    Insert_Beg(&(l1),1);
    Insert_Beg(&(l1),2);
    Insert_Beg(&(l1),3);
    Insert_Beg(&(l1),4);
    Insert_Beg(&(l1),5);
    Insert_Beg(&(l1),6);
    Traversal(l1);
    Insert_Beg(&(l2),7);
    Insert_Beg(&(l2),8);
    Insert_Beg(&(l2),9);
    concatination(&l1,&l2);
    Traversal(l1);
}