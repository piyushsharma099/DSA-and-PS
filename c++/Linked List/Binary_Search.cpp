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
    struct node *Q,*p;
    Q=*list;
    if(Q==NULL){
        Insert_Beg(&(*list),x);
    }
    else{
        while(Q->next!=NULL){
            Q=Q->next;
        }
        p=getnode(list);
        p->info=x;
        p->next=NULL;
        Q->next=p;
    }
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
struct node*middle_element(struct node**s,struct node**l){
    struct node*t,*r;
    t=*s;
    r=(*s);
    while(r!=(*l) && r->next!=(*l)){
        t=t->next;
        r=r->next;
        r=r->next;
    }
    return t;
}
int Binary_Search(struct node**l1 , int x){
    struct node*s,*l;
    s=*l1;
    l=NULL;
     do{
        struct node*mid=middle_element(&s,&l);        
        if(mid==NULL){
            return false;
        }        
        if(mid->info==x){
            return true;       
        } 
        else if(mid->info<x){
            s=mid->next;      
        }  
        else{
            l=mid;
        }
    }while (l==NULL || l!=s);
    return false;
}
int main(){
    struct node*l1,*p,*q;
    l1=NULL;
    Insert_End(&(l1),10);
    Insert_End(&(l1),12);
    Insert_End(&(l1),30);  
    Insert_End(&(l1),44);
    Insert_End(&(l1),50);
    Insert_End(&(l1),66);
    Insert_End(&(l1),70);
    Insert_End(&(l1),88);
    Insert_End(&(l1),90);
    cout<<"Enter the Element to search"<<endl;
    int x;
    cin>>x;
    int ans=Binary_Search(&(l1),x);
    cout<<ans;
}