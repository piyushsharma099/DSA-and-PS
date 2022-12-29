#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    int h;
};
struct node* Makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->h=NULL;
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
void Mine(struct node*T){
    while(T->left!=NULL){
        T=T->left;
    }
    cout<<T->data;
}
void Maxe(struct node*T){
    while(T->right!=NULL){
        T=T->right;
    }
    cout<<T->data;
}
int max(int p , int q){
    if(p>q){
        return p;
    }
    else{
        return q;
    }
}
int height(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        if(T->left==NULL && T->right==NULL){
            return 0;
        }
        else{
            int l=height(T->left);
            int r=height(T->right);
            return max(l,r) + 1;
        }
    }
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
struct node*Left_rotation(struct node*x){
    struct node*y,*z;
    y=x->right;
    z=y->left;
    y->left=x;
    x->right=z;
    return y;
}
struct node*Right_rotation(struct node*x){
    struct node*y,*z;
    y=x->left;
    z=y->right;
    y->right=x;
    x->left=z;
    return y;
}
struct node*LL(struct node*x){
    struct node*y=Right_rotation(x);
    return y;
}
struct node*RR(struct node*x){
    struct node*y=Left_rotation(x);
    return y;
}
struct node*LR(struct node*x){
    struct node*y=x->left;
    struct node*z=Left_rotation(y);
    x->left=z;

    struct node*t=Right_rotation(x);
    return t;
}
struct node*RL(struct node*x){
    struct node*y=x->right;
    struct node*z=Right_rotation(y);
    x->right=z;

    struct node*t=Left_rotation(x);
    return t;
}
int Balance_factor(struct node*T){
    int hl,hr;
    if(T==NULL){
        return 0;
    }
    if(T->left==NULL){
        hl=0;
    }
    else{
        hl=1+T->left->h;
    }
    if(T->right==NULL){
        hr=0;
    }
    else{
        hr=1+T->right->h;
    }
    max(hl,hr);
    return (hl-hr);
}
struct node *BST_Insert(struct node**T , int x){
    if((*T)==NULL){
        (*T)=Makenode(x);
    }
    else{
        if(x<(*T)->data){
            (*T)->left=BST_Insert(&((*T)->left),x);
        }
        else{
            (*T)->right=BST_Insert(&((*T)->right),x);
        }
    }
    (*T)->h=height((*T));
    return (*T);
}
struct node *AVL_Insert(struct node**T , int x){
    if((*T)==NULL){
        (*T)=Makenode(x);
    }
    else{
        if(x<(*T)->data){
            (*T)->left=AVL_Insert(&((*T)->left),x);
            if(Balance_factor((*T))==2){
                if(x<(*T)->left->data){
                    (*T)=LL((*T));
                }
                else{
                    (*T)=LR((*T));
                }
            }
        }
        else{
            (*T)->right=AVL_Insert(&((*T)->right),x);
            if(Balance_factor((*T))==-2){
                if(x<(*T)->right->data){
                    (*T)=RR((*T));
                }
                else{
                    (*T)=RL((*T));
                }
            }
        }
    }
    (*T)->h=height((*T));
    return (*T);
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
    Mine(root);
    cout<<endl;
    //
    Maxe(root);
    cout<<endl;
    //
    struct node*p=BST_search(&root,70);
    cout<<p->data;
    cout<<endl;
    //
    return 0;
}