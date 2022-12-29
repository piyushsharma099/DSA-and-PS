#include<bits/stdc++.h>
using namespace std;
# define FALSE 0
# define TRUE 1
struct node{
    char data;
    struct node *left;
    struct node *right;
    struct node *next;
};

struct node* makenode(char x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    p->next=NULL;
    return p;
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
int prcd(char a,char b){
    if(a=='^' || a=='*' || a=='/' || a=='%'){
        if(b=='^'){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if(b=='+' || b=='-'){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
}
void opdpush(struct node **x,struct node **start){
    (*x)->next=(*start);
    (*start)=(*x);
}
struct node *opdpop(struct node **start){
    struct node *p;
    p=(*start);
    (*start)=(*start)->next;
    return p;
}
struct node *Build_Expression_Tree(char exp[]){
    char optstack[100],s;
    int top=-1,i=0;
    struct node *start,*x=NULL;
    start=NULL;
    while(exp[i]!='\0'){
        s=exp[i];
        if(s>='a' && s<='z'){
    
            x=makenode(s);
            opdpush(&x,&start);
        }
        else{
            while(top!=-1 && prcd(optstack[top],s)){
                struct node *t,*b,*a;
                char op;
                op=optstack[top--];
                t=makenode(op);
                b=opdpop(&start);
                a=opdpop(&start);
                t->left=a;
                t->right=b;
                opdpush(&t,&start);
            }
            optstack[++top]=s;
        }
        i++;
    }
    while(top!=-1){
        struct node *t,*b,*a;
        char op;
        op=optstack[top--];
        t=makenode(op);
        b=opdpop(&start);
        a=opdpop(&start);
        t->left=a;
        t->right=b;
        opdpush(&t,&start);

    }
    return opdpop(&start);
}
int main(){
    struct node *start;
    char exp[20];
    gets(exp);
    start=Build_Expression_Tree(exp);
    //
    inorderTraversal(start);
    cout<<endl;
    //
    postorderTraversal(start);
    cout<<endl;
    //
    PreorderTraversal(start);
    cout<<endl;
}