#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node*prev;
    struct node*next;
};
struct node * getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node*Initialization(struct node*front , struct node*rear){
    rear=NULL;
    front=NULL;
}
int IsEmpty(struct node*front , struct node*rear){
    if(rear==NULL){
        return true;
    }
    else{
        return false;
    }
}
struct node*Insert_Front(struct node**front , struct node**rear , int x){
    struct node*p;
    p=getnode(front);
    p->info=x;
    p->prev=NULL;
    p->next=(*front);
    if((*front)!=NULL){
        (*front)->prev=p;
    }
    else{
        (*rear)=p;
    }
    (*front)=p;
}
struct node*Insert_Rear(struct node*front , struct node*rear , int x){
    struct node*p;
    p=getnode(&front);
    p->info=x;
    p->prev=rear;
    p->next=NULL;
    if(rear!=NULL){
        rear->prev=p;
    }
    else{
        front=p;
    }
    rear=p;
}
int Del_Front(struct node*front , struct node*rear){
    struct node*p;
    if(front!=NULL){
        int x=front->info;
        p=front;
        front=front->next;
        free(p);
        if(front==NULL){
            rear=NULL;
        }
        else{
            front->prev=NULL;
        }
        return x;
    }
    else{
        cout<<"Void Deletion";
    }
}
int Del_Rear(struct node*front , struct node*rear){
    struct node*p;
    if(front!=NULL){
        int x=rear->info;
        p=rear;
        rear=rear->prev;
        free(p);
        if(rear==NULL){
            front=NULL;
        }
        else{
            rear->next=NULL;
        }
        return x;
    }
    else{
        cout<<"Void Deletion";
    }
}
struct node*Traversal(struct node*front , struct node*rear){
    struct node*p;
    p=(front);
    // int c=1;
    int x=4;
    while(p!=NULL){
        cout<<p->info<<" ";  
        p=p->next;
        // cout<<c<<" ";
        // c++;
    }
    //cout<<p->info;
    cout<<endl;

}

// void Traversal(struct node **front,struct node **rear){
//     if((*front)!=NULL){
//         struct node *p;
//         p=(*front);
//         while(p!=(*rear)){
//             cout<<p->info;
//             p=p->next;
//         }
//         cout<<p->info;
//     }
//     else{
//         printf("queue is empty");
//         exit(1);
//     }
// }

int main(){
    struct node*r,*f;
    Initialization(f,r);
    Insert_Front(&f,&r,10);
    Insert_Front(&f,&r,20);
    Insert_Front(&f,&r,30);
    Insert_Front(&f,&r,40);

    // Insert_Rear(f,r,4);
    // Insert_Rear(f,r,4);
    // Insert_Rear(f,r,4);
    // Insert_Rear(f,r,4);
    // Traversal(&f,&r);
    Traversal(f,r);
}