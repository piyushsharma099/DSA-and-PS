#include<bits/stdc++.h>
using namespace std;
struct gnode{
    int data;
    struct gnode *child;
    struct gnode *sibling;
};
struct gnode* Makegnode(int x){
    struct gnode *p;
    p=(struct gnode*)malloc(sizeof(struct gnode));
    p->data=x;
    p->child=NULL;
    p->sibling=NULL;
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
        PreorderTraversal(T->child);
        PreorderTraversal(T->sibling);
    }
}
void inorderTraversal(struct gnode *T){
    if(T!=NULL){
        inorderTraversal(T->child);
        cout<<T->data<<" ";
        inorderTraversal(T->sibling);
    }
}
void postorderTraversal(struct gnode *T){
    if(T!=NULL){
        postorderTraversal(T->child);
        postorderTraversal(T->sibling);
        cout<<T->data<<" ";
    }
}
void level_order(struct gnode*T){
    queue<struct gnode*>Q;
    struct gnode*x,*p;
    Q.push(T);
    cout<<T->data<<" ";
    while(!Q.empty()){
        x=Q.front();
        Q.pop();
        if(x->child!=NULL){
            Q.push(x->child);
            cout<<T->child->data<<" ";
        }
        p=x->child->sibling;
        while(p!=NULL){
            Q.push(p->sibling);
            cout<<p->sibling->data<<" ";
            p=p->sibling;
        }
    }
}
int main(){
    struct gnode *root=NULL;
    int x;
    cout<<"Enter the Root gnode Data :- ";
    cin>>x;
    root=Makegnode(x);
    CreateTree(&root);
    //
    level_order(root);
    //
    // PreorderTraversal(root);
    // cout<<endl;
    // inorderTraversal(root);
    // cout<<endl;
    // postorderTraversal(root);
    // cout<<endl;
    return 0;
}