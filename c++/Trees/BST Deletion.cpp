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
bool IS_left(struct node*p){
    if(p->father->left == p){
        return true;
    }
    else{
        return false;
    }
}
bool IS_right(struct node*p){
    if(p->father->right == p){
        return true;
    }
    else{
        return false;
    }
}
struct node*sibling(struct node*p){
    if(IS_left(p)){
        return p->father->right;
    }
    else{
        return p->father->right;
    }
}
int BST_Delete(struct node**T,struct node*p){
    struct node*q,*l,*r,*c;
    q=p->father;
    if(p->left==NULL && p->right==NULL){
        if(q!=NULL){
            if(IS_left(p)){
                q->left=NULL;
            }
            else{
                q->right=NULL;
            }
        }
        else{
            (*T)=NULL;
        }
        int x=p->data;
        free(p);
        return x;
    }
    else{
        if(p->left==NULL || p->right==NULL){
            l=p->left;
            r=p->right;
            if(l==NULL){
                c=r;
            }
            else{
                c=l;
            }
            if(IS_left(p)){
                q->left=c;
            }
            else{
                q->right=c;
            }
            c->father=q;
            int x=p->data;
            free(p);
            return x;
        }
        else{
            q=BST_Sucessor(&p);
            int x=BST_Delete(T,q);
            p->data=x;
            int y=p->data;
            return y;
        }
    }
}
int main(){
    struct node *root=NULL;
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
    struct node*p=BST_search(&root,70);
    cout<<BST_Delete(&root,p);
    //
    return 0;
}