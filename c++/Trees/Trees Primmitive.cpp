// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     char data;
//     struct Node *left;
//     struct Node *right;
// };
// struct Node* MakeNode(char x){
//     struct Node *p;
//     p=(struct Node*)malloc(sizeof(struct Node));
//     p->data=x;
//     p->left=NULL;
//     p->right=NULL;
//     return p;
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
//         inorderTraversal(T->left);
//         cout<<T->data<<" ";
//         inorderTraversal(T->right);
//     }
// }
// void postorderTraversal(struct node *T){
//     if(T!=NULL){
//         postorderTraversal(T->left);
//         postorderTraversal(T->right);
//         cout<<T->data<<" ";
//     }
// }
// int main(){
//     struct Node *root=NULL;
//     root=MakeNode('A');
//     root->left=MakeNode('B');
//     root->right=MakeNode('C');
//     root->right->left=MakeNode('D');
//     root->right->right=MakeNode('E');
//     root->right->left->left=MakeNode('F');
//     root->right->left->left->right=MakeNode('G');
//     PreorderTraversal(root);
//     printf("\n");
//     inorderTraversal(root);
//     printf("\n");
//     postorderTraversal(root);
//     return 0;
// }