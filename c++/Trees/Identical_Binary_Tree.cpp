#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* Makenode(int x1){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x1;
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
bool Indentical_Binary_Trees(struct node*T1 , struct node*T2){
    if(T1==NULL && T2==NULL){
        return 1;
    }
    if(T1!=NULL && T2!=NULL){
        if(T1->data==T2->data && Indentical_Binary_Trees(T1->left,T2->left) && Indentical_Binary_Trees(T1->right,T2->right)){
            return 1;
        }
    }
    return 0;
}
int main(){
    struct node *root1=NULL;
    struct node *root2=NULL;
    int x1,x2;
    cout<<"Enter the root 1 node Data :- ";
    cin>>x1;
    root1=Makenode(x1);
    CreateTree(&root1);
    //
    cout<<"Enter the root 2 node Data :- ";
    cin>>x2;
    root2=Makenode(x2);
    CreateTree(&root2);
    //
    PreorderTraversal(root1);
    cout<<endl;
    inorderTraversal(root1);
    cout<<endl;
    postorderTraversal(root1);
    cout<<endl;
    //
    cout<<Indentical_Binary_Trees(root1,root2);
    //
    return 0;
}