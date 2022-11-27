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
int cycleDetection(struct node**list){
    struct node*t,*r;
    int c=0;
    t=*list;
    r=*list;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r){
            c++;
            return true;
        }
    }
    if(c==0){
        return false;;
    }
    return 0;
}
void cyclelength(struct node**list){
    struct node*t,*r;
    int c=0;
    t=*list;
    r=*list;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r){
            do{
                c++;
                t=t->next;
            }while(t!=r);
            cout<<c<<endl;
            break;
        }
    }      
}
int cyclestartpoint(struct node**list){
    struct node*t,*r,*k;
    int c=0;
    t=*list;
    r=*list;
    k=*list;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r){
            k=k->next;
            r=r->next;
            if(r==k){
                return r->info;
            }
        }
    }
    return 0;
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
    return t->info;
}
int main(){
    struct node*l1,*p,*q;
    l1=NULL;
    Insert_Beg(&(l1),1);
    Insert_Beg(&(l1),2);
    Insert_Beg(&(l1),3);
    Insert_Beg(&(l1),4);
    Insert_Beg(&(l1),5);
    Insert_Beg(&(l1),6);
    Insert_Beg(&(l1),7);
    Insert_Beg(&(l1),8);
    Insert_Beg(&(l1),9);
    Insert_Beg(&(l1),10);
    Traversal(l1);
    p=l1;
    while(p->next!=NULL){
        p=p->next;
    }
    q=l1;
    while(q->info!=4){
        q=q->next;
    }
    p->next=q;
    
    // int k = cycleDetection(&l1);
    // cout<<k<<endl;

    cyclelength(&l1);

    int k3=cyclestartpoint(&l1);
    cout<<k3<<endl;

    // int k4 = middle_element(&l1);
    // cout<<k4;
}