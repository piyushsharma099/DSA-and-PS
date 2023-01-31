#include<bits/stdc++.h>
using namespace std;
struct gnode{
    int data;
    struct gnode *child;
    struct gnode *sibling;
    struct gnode *left;
    struct gnode *right;
};
struct gnode* Makegnode(int x){
    struct gnode *p;
    p=(struct gnode*)malloc(sizeof(struct gnode));
    p->data=x;
    p->child=NULL;
    p->sibling=NULL;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void CreateTree(struct gnode**T){
    int choice,x;
    struct gnode*p;
    cout<<"Whether child of "<<(*T)->data<<" exists or not (1/0) :- ";
    cin>>choice;
    if(choice==1){
        cout<<"Input Data of child of "<<(*T)->data<<" :- ";
        cin>>x;
        p=Makegnode(x);
        (*T)->child=p;
        CreateTree(&p);
    }
    cout<<"Whether sibling of "<<(*T)->data<<" exists or not (1/0) :- ";
    cin>>choice;
    if(choice==1){
        cout<<"Input Data of sibling of "<<(*T)->data<<" :- ";
        cin>>x;
        p=Makegnode(x);
        (*T)->sibling=p;
        CreateTree(&p);
    }
}
void PreorderTraversal(struct gnode *T){
    if(T!=NULL){
        cout<<T->data<<" ";
        PreorderTraversal(T->left);
        PreorderTraversal(T->right);
    }
}
void inorderTraversal(struct gnode *T){
    if(T!=NULL){
        inorderTraversal(T->left);
        cout<<T->data<<" ";
        inorderTraversal(T->right);
    }
}
void postorderTraversal(struct gnode *T){
    if(T!=NULL){
        postorderTraversal(T->left);
        postorderTraversal(T->right);
        cout<<T->data<<" ";
    }
}
struct gnode*convert_to_binary(struct gnode*gT){
    if(gT==NULL){
        return NULL;
    }
    else{
        gT->left=convert_to_binary(gT->child);
        gT->right=convert_to_binary(gT->sibling);
    }
    return gT;
}
int main(){
    struct gnode *root=NULL;
    int x;
    cout<<"Enter the Root gnode Data :- ";
    cin>>x;
    root=Makegnode(x);
    CreateTree(&root);
    //
    struct gnode*p=convert_to_binary(root);
    //
    PreorderTraversal(p);
    cout<<endl;
    inorderTraversal(p);
    cout<<endl;
    postorderTraversal(p);
    cout<<endl;
    return 0;
}