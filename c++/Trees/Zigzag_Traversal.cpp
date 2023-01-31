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
void zizagtraversal(struct node* T){
    if(T==NULL){
        cout<<"Invalid";
        return;
    }
    else{
        stack<struct node*>s1;
        stack<struct node*>s2;
        s1.push(T);
        bool l2r = true;
        while(!s1.empty()) {
            struct node* temp = s1.top();
            s1.pop();
            if(temp!=NULL) {
                cout<<temp->data << " ";
                if(l2r==true){
                    if(temp->left!=NULL)
                        s2.push(temp->left);
                    if(temp->right!=NULL)
                        s2.push(temp->right);
                }
                else{
                    if(temp->right)
                        s2.push(temp->right);
                    if(temp->left)
                        s2.push(temp->left);
                }
            }
            if(s1.empty()) {
                if(l2r==true){
                    l2r=false;
                }
                else{
                    l2r=true;
                }
                swap(s1,s2);
            }
        }
    }
}
int main(){
    struct node *root=NULL;
    int x;
    cout<<"Enter the Root node Data :- ";
    cin>>x;
    root=Makenode(x);
    CreateTree(&root);
    PreorderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    //
    cout<<"ZigZag Traversal is :- ";
    zizagtraversal(root);
    return 0;
}