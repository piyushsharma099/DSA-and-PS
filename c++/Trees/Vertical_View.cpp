#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
    int hd;
};
struct node*rear,*front;
int ht[100][100]={0};
struct node* Makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->next=NULL;
    return p;
}
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
int height(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        if(T->left==NULL && T->right==NULL){
            return 0;
        }
        else{
            return max(height(T->left),height(T->right)) + 1;
        }
    }
}
struct node*Insert_HT(struct node*x){
    int r=x->hd;
    int c=0;
    while(ht[r][c]!=0){
        c++;
    }
    ht[r][c]=x->data;
}
struct node*Create_Hash(struct node *T){
    struct node*p;
    Initialize(&rear,&front);
    EnQueue(&rear,&front,&T);
    T->hd=0;
    EnQueue(&rear,&front,&T);
    Insert_HT(T);
    while(!IsEmpty(&rear,&front)){
        p=DeQueue(&rear,&front,&T);
        if(p->left!=NULL){
            p->left->hd=p->hd-1;
            Insert_HT(p->left);
            EnQueue(&rear,&front,&(p->left));
        }
        if(p->right!=NULL){
            p->right->hd=p->hd+1;
            Insert_HT(p->right);
            EnQueue(&rear,&front,&(p->right));
        }
    }
}
void Vertical_View(struct node*T){
    int h=height(T);
    int r_min=(-1)*h;
    int r_max=h;
    for(int i=r_min ; i<r_max ; i++){
        int j=0;
        while(ht[i][j]!=0){
            cout<<ht[i][j];
            j++;
        }
    }
    cout<<endl;
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
    Create_Hash(root);
    Vertical_View(root);
    // for(int i=0 ; i<10 ; i++){
    //     cout<<ht[i][i];
    // }
    return 0;
}