#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* Makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
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
struct node*lowest_common_ancestor(struct node*root , int n1 , int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    struct node*left=lowest_common_ancestor(root->left , n1 , n2);
    struct node*right=lowest_common_ancestor(root->right , n1 , n2); 
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    return root;
}
int main(){
    struct node *root=NULL;
    int x;
    cout<<"Enter the Root node Data :- ";
    cin>>x;
    root=Makenode(x);
    CreateTree(&root);
    //
    int n1,n2;
    n1=2;
    n2=3;
    cout<<(lowest_common_ancestor(root,n1,n2))->data;
    return 0;
}