#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
struct node* Makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->father=NULL;
    return p;
}
void CreateTree(struct node**T){
    int choice,x;
    struct node*p;
    cout<<"Whether left of "<<(*T)->data<<" exists or not (1/0) :- ";
    cin>>choice;
    if(choice==1){
        cout<<"Input Data of left of "<<(*T)->data<<" :- ";
        cin>>x;
        p=Makenode(x);
        (*T)->left=p;
        CreateTree(&p);
    }
    cout<<"Whether right of "<<(*T)->data<<" exists or not (1/0) :- ";
    cin>>choice;
    if(choice==1){
        cout<<"Input Data of right of "<<(*T)->data<<" :- ";
        cin>>x;
        p=Makenode(x);
        (*T)->right=p;
        CreateTree(&p);
    }
}
void PreorderTraversal(struct node *T){
    if(T!=NULL){
        cout<<T->data<<" ";
        PreorderTraversal(T->left);
        PreorderTraversal(T->right);
    }
}
void inorderTraversal(struct node *T){
    if(T!=NULL){
        inorderTraversal(T->left);
        cout<<T->data<<" ";
        inorderTraversal(T->right);
    }
}
void postorderTraversal(struct node *T){
    if(T!=NULL){
        postorderTraversal(T->left);
        postorderTraversal(T->right);
        cout<<T->data<<" ";
    }
}
struct node*Mine(struct node*T){
    while(T->left!=NULL){
        T=T->left;
    }
    return T;
}
struct node*Maxe(struct node*T){
    while(T->right!=NULL){
        T=T->right;
    }
    return T;
}
struct node *BST_search(struct node**T , int x){
    struct node*p=(*T);
    while(p!=NULL){
        if(p->data==x){
            return p;
        }
        else if(p->data<x){
            p=p->right;
        }
        else{
            p=p->left;
        }
    }
    return NULL;
}
struct node*BST_Sucessor(struct node**T){
    struct node*p=(*T);
    struct node*q=NULL;
    if(p->right!=NULL){
        q=Mine(p->right);
        return q;
    }
    else{
        q=p->father;
        while((q!=NULL) && (q->right==p)){
            p=q;
            q=q->father;
        }
    }
    return q;
}
struct node*BST_Precessor(struct node**T){
    struct node*p=(*T);
    struct node*q=NULL;
    if(p->left!=NULL){
        q=Maxe(p->left);
        return q;
    }
    else{
        q=p->father;
        while((q!=NULL) && (q->left==p)){
            p=q;
            q=q->father;
        }
    }
    return q;
}
struct node*BST_Insert(struct node**T , int x){
    struct node*p=(*T);
    struct node*q=NULL;
    if((*T)==NULL){
        (*T)=Makenode(x);
    }
    else{
        while(p!=NULL){
            q=p;
            if(x<p->data){
                p=p->left;
            }
            else{
                p=p->right;
            }
        }
        if(x<q->data){
            q->left=Makenode(x);
            q->left->father=q;
        }
        else{
            q->right=Makenode(x);
            q->right->father=q;
        }
    }
}
int main(){
    struct node *root=NULL;
    // int x;
    // cout<<"Enter the Root node Data :- ";
    // cin>>x;
    // root=Makenode(x);
    // CreateTree(&root);
    // PreorderTraversal(root);
    // cout<<endl;
    // inorderTraversal(root);
    // cout<<endl;
    // postorderTraversal(root);
    // cout<<endl;
    //
    BST_Insert(&root,100);
    BST_Insert(&root,20);
    BST_Insert(&root,50);
    BST_Insert(&root,40);
    BST_Insert(&root,70);
    BST_Insert(&root,150);
    BST_Insert(&root,170);
    //
    inorderTraversal(root);
    cout<<endl;
    //
    struct node*mine=Mine(root);
    cout<<mine->data;
    cout<<endl;
    //
    struct node*maxe=Maxe(root);
    cout<<maxe->data;
    cout<<endl;
    //
    struct node*p=BST_search(&root,70);
    cout<<p->data;
    cout<<endl;
    //
    struct node*s=BST_Sucessor(&p);
    cout<<s->data;
    cout<<endl;
    struct node*pr=BST_Precessor(&p);
    cout<<pr->data;
    cout<<endl;
    //
    return 0;
}