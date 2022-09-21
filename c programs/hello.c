#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node*next ;
};
void linklisttraversal(struct node*ptr){
    while(ptr!=NULL){
        printf("element:%d\n,",ptr->data);
        ptr=ptr->next;
    }
}
int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    // allocating memory for nodes in the link list in heap memory
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));

    

}