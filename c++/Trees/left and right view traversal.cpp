// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     struct node *left;
//     struct node *right;
//     struct node *next;
//     int hd;
// };
// struct node*rear,*front;
// int ht[100][100]={0};
// struct node* Makenode(int x){
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=x;
//     p->left=NULL;
//     p->right=NULL;
//     p->next=NULL;
//     return p;
// }
// struct node*Initialize(){
//     (front)=NULL;
//     (rear)=NULL;
// }
// struct node*EnQueue(struct node**p){
//     if((rear)!=NULL){
//         (rear)->next=((*p));
//     }
//     else{
//         (front)=(*p);
//     }
//     (rear)=(*p);
// }
// struct node*DeQueue(struct node**p){
//     (*p)=(front);
//     (front)=(front)->next;
//     if((front)==NULL){
//         (rear)=NULL;
//     }
//     return (*p);
// }
// bool IsEmpty(){
//     if((front)==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void PreorderTraversal(struct node *T){
//     if(T!=NULL){
//         cout<<(T->data)<<" ";
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
// int height(struct node*T){
//     if(T==NULL){
//         return 0;
//     }
//     else{
//         if(T->left==NULL && T->right==NULL){
//             return 0;
//         }
//         else{
//             return max(height(T->left),height(T->right)) + 1;
//         }
//     }
// }
// struct node*Insert_HT(struct node*x){
//     int r=x->hd;
//     int c=0;
//     while(ht[r][c]!=0){
//         c++;
//     }
//     ht[r][c]=x->data;
// }
// void Left_Right_View(struct node *T){
//     struct node*x;
//     int R=0;
//     Initialize();
//     EnQueue(&T);
//     T->hd=0;
//     if(x->left!=NULL){
//             x->left->hd=x->hd+1;
//             if(R<x->left->hd) R=x->left->hd;
//             EnQueue(&(x->left));
//             Insert_HT(x->left);
//         }
//         if(x->right!=NULL){
//             x->right->hd=x->hd+1;
//             if(R<x->right->hd) R=x->right->hd;
//             EnQueue(&(x->right));
//             Insert_HT(x->right);
//         }
//         cout<<x->data<<" ";
//     }
//     cout<<endl<<"LEFT View Traversal: ";
//     for(int i=0 ; i<=R ; i++){
//         cout<<HT[i][0]<<" ";
//     }
//     cout<<endl<<"RIGHT View Traversal: ";
//     for(int i=0;i<=R;i++){
//         int j=0;
//         while(HT[i][j]!=0) j++;
//         cout<<HT[i][j-1];
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
//     Left_Right_View(root);
//     // for(int i=0 ; i<10 ; i++){
//     //     cout<<ht[i][i];
//     // }
//     return 0;
// }