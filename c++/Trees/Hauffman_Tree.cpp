#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *left;
    struct node *right;
    struct node *next;
    int ch;
    int freq;
};
struct node* Makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->freq=x;
    p->left=NULL;
    p->right=NULL;
    p->next=NULL;
    p->ch=0;
    return p;
}
void PreorderTraversal(struct node *T){
    if(T!=NULL){
        cout<<T->freq<<" ";
        PreorderTraversal(T->left);
        PreorderTraversal(T->right);
    }
}
void inorderTraversal(struct node *T){
    if(T!=NULL){
        inorderTraversal(T->left);
        cout<<T->freq<<" ";
        inorderTraversal(T->right);
    }
}
void postorderTraversal(struct node *T){
    if(T!=NULL){
        postorderTraversal(T->left);
        postorderTraversal(T->right);
        cout<<T->freq<<" ";
    }
}
struct node*Enqueue(struct node*PQ,struct node*x){
    struct node*p=PQ;
    struct node*q=NULL;
    while(p!=NULL && x->freq>=p->freq){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        x->next=PQ;
        PQ=x;
    }
    else{
        x->next=q->next;
        q->next=x;
    }
}
struct node*Hauffman_Tree(int ch[] , int f[] , int n){
    struct node*PQ=NULL,*x;
    for(int i=0 ; i<n ; i++){
        x=Makenode(f[i]);
        //x->freq=f[i];
        x->ch=ch[i];
        Enqueue(PQ,x);
        //cout<<i<<" ";
    }
    cout<<PQ->freq<<" ";
    // for(int i=0 ; i<n ; i++){
    //     cout<<0<<" ";
    //     struct node*x=PQ;
    //     PQ=PQ->next;
    //     struct node*y=PQ;
    //     PQ=PQ->next;
    //     struct node*z=Makenode(PQ->freq);
    //     z->left=x;
    //     z->right=y;
    //     z->freq=(x->freq+y->freq);
    //     Enqueue(PQ,z);
    // }
    // return PQ;
}
int main(){
    struct node *root=NULL;
    // int x;
    // cout<<"Enter the Root node freq :- ";
    // cin>>x;
    // root=Makenode(x);
    // CreateTree(&root);
    // //
    // inorderTraversal(root);
    // cout<<endl;
    //
    int ch[]={1,4,2,5,6};
    int f[]={15,20,30,10,5};
    struct node*p=Hauffman_Tree(ch , f , 5);
    inorderTraversal(p);
    return 0;
}