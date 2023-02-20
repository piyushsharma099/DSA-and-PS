#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
    struct node *father;
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
int h(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        if(T->left==NULL && T->right==NULL){
            return 0;
        }
        else{
            int l=h(T->left);
            int r=h(T->right);
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
    (*T)->h=h((*T));
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
    (*T)->h=h((*T));
    return (*T);
}
struct node * minValueNode(struct node* T){
    struct node* current = T;
    while (current->left != NULL)
        current = current->left;
    return current;
}
struct node* deletenode(struct node* root, int data){
    if (root == NULL)
        return root;
    if ( data < root->data )
        root->left = deletenode(root->left, data);
    else if( data > root->data )
        root->right = deletenode(root->right, data);
    else{
        if( (root->left == NULL) ||
            (root->right == NULL) ){
            node *temp = root->left ? root->left : root->right;
            if (temp == NULL){
                temp = root;
                root = NULL;
            }
            else 
            *root = *temp; 
            free(temp);
        }
        else{
            node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deletenode(root->right,temp->data);
        }
    }    
    if (root == NULL)
    return root;
    root->h = 1 + max(h(root->left),h(root->right));
    int balance = Balance_factor(root);
    if (balance > 1 &&
        Balance_factor(root->left) >= 0)
        return RR(root);
    if (balance > 1 &&
        Balance_factor(root->left) < 0){
        root->left = LL(root->left);
        return RR(root);
    }
    if (balance < -1 &&
        Balance_factor(root->right) <= 0)
        return LL(root);
    if (balance < -1 &&
        Balance_factor(root->right) > 0){
        root->right = RR(root->right);
        return LL(root);
    }
    return root;
}
int main(){
    struct node *root=NULL;
    AVL_Insert(&root,10);
    AVL_Insert(&root,9);
    AVL_Insert(&root,80);
    AVL_Insert(&root,7);
    AVL_Insert(&root,16);
    AVL_Insert(&root,5);
    PreorderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    Level_Order_Traversal(root);
    deletenode(root,7);
    cout<<endl;
    cout<<"After Deleting node 7 : "<<endl;
    Level_Order_Traversal(root);
    return 0;
}