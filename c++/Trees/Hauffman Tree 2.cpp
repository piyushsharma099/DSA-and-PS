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
// struct node*Enqueue(struct node*PQ,struct node*x){
//     struct node*p=PQ;
//     struct node*q=NULL;
//     while(p!=NULL && x->freq>=p->freq){
//         q=p;
//         p=p->next;
//     }
//     if(q==NULL){
//         x->next=PQ;
//         PQ=x;
//     }
//     else{
//         x->next=q->next;
//         q->next=x;
//     }
// }
struct node*Hauffman_Tree(int ch[] , int f[] , int n){
    // sort(f,f+n);
    // reverse(f, f+n); 
    struct node*x;
    priority_queue<struct node*>PQ;
    for(int i=0 ; i<n ; i++){
        x=Makenode(f[i]);
        //x->freq=f[i];
        x->ch=ch[i];
        PQ.push(x);
        struct node*aa=PQ.top();
        cout<<(aa->freq)<<" ";
    }
    // for(int i=0 ; i<n ; i++){
    //     struct node*aa=PQ.top();
    //     cout<<(aa->freq)<<" ";
    // }
    cout<<endl;
    for(int i=1 ; i<n ; i++){
        struct node*x=PQ.top();
        PQ.pop();
        struct node*y=PQ.top();
        PQ.pop();
        struct node*z=Makenode(x->freq+y->freq);
        z->left=x;
        z->right=y;
        //z->freq=(x->freq+y->freq);
        PQ.push(z);
    }
    return PQ.top();
}
int main(){
    struct node *root=NULL;
    int ch[]={1,4,2,5,6};
    int f[]={35,20,25,15,5};

    // int ch[]={1,4,5,6};
    // int f[]={35,25,15,5};

    //reverse(f, f+5); 
    struct node*p=Hauffman_Tree(ch , f , 5);
    inorderTraversal(p);
    return 0;
}