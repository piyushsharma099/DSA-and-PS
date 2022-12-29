// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     struct node *left;
//     struct node *right;
//     struct node *next;
// };
// struct Queue{
//     struct node *rear;
//     struct node *front;
// };
// struct node* Makenode(int x){
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=x;
//     p->left=NULL;
//     p->right=NULL;
//     p->next=NULL;
//     return p;
// }
// struct node*Initialize(struct Queue **q){
//     ((*q)->front)=NULL;
//     ((*q)->rear)=NULL;
// }
// struct node*EnQueue(struct Queue **q , struct node**p){
//     if(((*q)->rear)!=NULL){
//         ((*q)->rear)->next=((*p));
//     }
//     else{
//         ((*q)->front)=(*p);
//     }
//     ((*q)->rear)=(*p);
// }
// struct node*DeQueue(struct Queue **q , struct node**p){
//     (*p)=((*q)->front);
//     ((*q)->front)=((*q)->front)->next;
//     if(((*q)->front)==NULL){
//         ((*q)->rear)=NULL;
//     }
//     return (*p);
// }
// bool IsEmpty(struct Queue **q){
//     if(((*q)->front)==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void PreorderTraversal(struct node *T){
//     if(T!=NULL){
//         cout<<T->data<<" ";
//         PreorderTraversal(T->left);
//         PreorderTraversal(T->right);
//     }
// }
// void inorderTraversal(struct node *T){
//     if(T!=NULL){
//         PreorderTraversal(T->left);
//         cout<<T->data<<" ";
//         PreorderTraversal(T->right);
//     }
// }
// void postorderTraversal(struct node *T){
//     if(T!=NULL){
//         PreorderTraversal(T->left);
//         PreorderTraversal(T->right);
//         cout<<T->data<<" ";
//     }
// }
// void CreateTree(struct node**T){
//     int choice,x;
//     struct node*p;
//     cout<<"Whether left of "<<(*T)->data<<" exists or not (1/0) :- ";
//     cin>>choice;
//     if(choice==1){
//         cout<<"Input Data of left of "<<(*T)->data<<" :- ";
//         cin>>x;
//         p=Makenode(x);
//         (*T)->left=p;
//         CreateTree(&p);
//     }
//     cout<<"Whether right of "<<(*T)->data<<" exists or not (1/0) :- ";
//     cin>>choice;
//     if(choice==1){
//         cout<<"Input Data of right of "<<(*T)->data<<" :- ";
//         cin>>x;
//         p=Makenode(x);
//         (*T)->right=p;
//         CreateTree(&p);
//     }
// }
// void Level_Order_Traversal(struct node*T){
//     struct Queue*q;
//     struct node*p;
//     Initialize(&q);
//     EnQueue(&q,&T);
//     while(!IsEmpty(&q)){
//         p=DeQueue((&q),&T);
//         cout<<p->data<<" ";
//         if(p->left!=NULL){
//             EnQueue(&q,&(p->left));
//         }
//         if(p->right!=NULL){
//             EnQueue(&q,&(p->right));
//         }
//     }
// }
// int main(){
//     struct node *root=NULL;
//     int x;
//     cout<<"Enter the Root node Data :- ";
//     cin>>x;
//     root=Makenode(x);
//     CreateTree(&root);
//     PreorderTraversal(root);
//     cout<<endl;
//     inorderTraversal(root);
//     cout<<endl;
//     postorderTraversal(root);
//     cout<<endl;
//     Level_Order_Traversal(root);
//     return 0;
// }