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
int count(struct node**list){
    struct node*p;
    p=*list;
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
struct node*Ins_aft_spe_pos(struct node**list,int pos,int x){
    struct node*p;
    p=*list;
    int n=count(list);
    if(pos==1){
        Insert_Beg(list,x);
    }
    else if(pos==n+1){
        Insert_After(&p,x);
    }
    else if(pos>1 && pos<=n){
        for(int i=0 ; i<pos ; i++){
            p=p->next;
        }
        Insert_After(&p,x);
    }
    else{
        cout<<"INVALID"<<endl;
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
    Ins_aft_spe_pos(&(l1),1,0);
    Traversal(l1);
    Ins_aft_spe_pos(&(l1),2,0);
    Traversal(l1);
    // Ins_aft_spe_pos(&(l1),11,0);
    // Traversal(l1);
}