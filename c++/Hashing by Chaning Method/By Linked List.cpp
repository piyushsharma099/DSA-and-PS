#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
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
    temp->data=x;
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
    p->data=x;
    p->next=NULL;
    temp->next=p;
    return 0;
}
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main(){
    struct node*HT[15];
    int r, n, x;
    for(int i=0 ; i<=14 ; i++){
        HT[i]=NULL;
    }
    cout<<"Enter number of data :- ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        r=x%10;
        Insert_End(&HT[r], x);
    }
    for(int i=0 ; i<n ; i++){
        cout<<i<<" --> ";
        Traversal(HT[i]);
           
    }
}