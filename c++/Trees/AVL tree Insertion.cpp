#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
    int h;
};
struct node* Makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->h=NULL;
    p->next=NULL;
    return p;
}
struct node*rear,*front;

struct node*Initialize(struct node**rear , struct node**front){
    (*front)=NULL;
    (*rear)=NULL;
}
struct node*EnQueue(struct node**rear , struct node**front , struct node**p){
    if((*rear)!=NULL){
        (*rear)->next=((*p));
    }
    else{
        (*front)=(*p);
    }
    (*rear)=(*p);
}
struct node*DeQueue(struct node**rear , struct node**front , struct node**p){
    (*p)=(*front);
    (*front)=(*front)->next;
    if((*front)==NULL){
        (*rear)=NULL;
    }
    return (*p);
}
bool IsEmpty(struct node**rear , struct node**front){
    if((*front)==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void Level_Order_Traversal(struct node*T){
    struct node*p;
    Initialize(&rear,&front);
    EnQueue(&rear,&front,&T);
    while(!IsEmpty(&rear,&front)){
        p=DeQueue(&rear,&front,&T);
        cout<<p->data<<" ";
        if(p->left!=NULL){
            EnQueue(&rear,&front,&(p->left));
        }
        if(p->right!=NULL){
            EnQueue(&rear,&front,&(p->right));
        }
    }
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
    // AVL_Insert(&root,35);
    // AVL_Insert(&root,12);
    // AVL_Insert(&root,2);
    // AVL_Insert(&root,1);
    // AVL_Insert(&root,30);
    // AVL_Insert(&root,25);
    // AVL_Insert(&root,9);
    // AVL_Insert(&root,6);
    // AVL_Insert(&root,5);
    // AVL_Insert(&root,20);
    //
    AVL_Insert(&root,10);
    AVL_Insert(&root,9);
    AVL_Insert(&root,8);
    AVL_Insert(&root,7);
    AVL_Insert(&root,6);
    AVL_Insert(&root,5);
    PreorderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    Level_Order_Traversal(root);
    //
    // Mine(root);
    // cout<<endl;
    // //
    // Maxe(root);
    // cout<<endl;
    // //
    // struct node*p=BST_search(&root,70);
    // cout<<p->data;
    // cout<<endl;
    // //
    return 0;
}