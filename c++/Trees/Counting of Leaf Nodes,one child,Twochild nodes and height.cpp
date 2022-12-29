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
int count(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        return count(T->left) + count(T->right) + 1 ;
    }
}
int count_no(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        if(T->left==NULL && T->right==NULL){
            return 1;
        }
        else{
            return count_no(T->left) + count_no(T->right);
        }
    }
}
int count_n1(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        if(T->left==NULL && T->right==NULL){
            return 0;
        }
        else{
            if(T->left!=NULL && T->right!=NULL){
                 return count_n1(T->left) + count_n1(T->right);
            }
            else{
                return count_n1(T->left) + count_n1(T->right) + 1;
            }
        }
    }
}
int count_n2(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        if(T->left==NULL && T->right==NULL){
            return 0;
        }
        else{
            if(T->left!=NULL && T->right!=NULL){
                 return count_n2(T->left) + count_n2(T->right) + 1;
            }
            else{
                return count_n2(T->left) + count_n2(T->right) ;
            }
        }
    }
}
int max(struct node *p , struct node *q){
    if(p->data > q->data){
        return p->data;
    }
    else{
        return q->data;
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
int IsStrictly(struct node*T){
    if(count_no(T)==2*height(T)){
        return 1;
    }
    else{
        return 0;
    }
}
int IsComplete_Binary_Tree(struct node*T){
    if(count_n1(T)==0){
        return 1;
    }
    else{
        return 0;
    }
}
int sum_of_all_nodes(struct node*T){
    if(T==NULL){
        return 0;
    }
    else{
        return (T->data + sum_of_all_nodes(T->left) + sum_of_all_nodes(T->right));
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
    cout<<" Total Nodes :- "<<count(root)<<endl;
    cout<<" Nodes with one child :- "<<count_n1(root)<<endl;
    cout<<" Total Node two child :- "<<count_n2(root)<<endl;
    cout<<" Total Node zero child :- "<<count_no(root)<<endl;
    cout<<" Height :- "<<height(root)<<endl;
    cout<<" Strictly Binary Tree :- "<<IsStrictly(root)<<endl;
    cout<<" Compelete Binary Tree :- "<<IsComplete_Binary_Tree(root)<<endl;
    cout<<sum_of_all_nodes(root)<<endl;
    return 0;
}