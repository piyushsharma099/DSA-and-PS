#include<bits/stdc++.h>
using namespace std;
struct node{
    char info;
    struct node *next;
};
struct node * getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// #######################################################################
// insert at begining 
struct node *Insert_Beg(struct node**list,char x){
    struct node *temp;
    temp=getnode(list);
    temp->info=x;
    temp->next=*list;
    *list=temp;
    return 0;
} 
// #######################################################################
// Insert After
struct node *Insert_After(struct node**list , char x){
    // struct node *temp,*p;
    // temp=*list;
    // while(temp!=NULL){
    //     if(temp->info==x){
    //         break;
    //     }
    //     else{
    //         temp=temp->next;
    //     }
    //     p=getnode(list);
    //     p->info=x;
    //     p->next=temp->next;
    //     temp->next=p;
    // }

    struct node *q;
    q=getnode(list);
    q->info=x;
    q->next=(*list)->next;
    (*list)->next=q;
    return 0;
}
// #######################################################################
// Insert End
struct node *Insert_End(struct node**list,char x){
    struct node *Q,*p;
    Q=*list;
    if(Q==NULL){
        Insert_Beg(&(*list),x);
    }
    else{
        while(Q->next!=NULL){
            Q=Q->next;
        }
        p=getnode(list);
        p->info=x;
        p->next=NULL;
        Q->next=p;
    }
    return 0;
}
// #######################################################################
// Deletion in begining 
int Delete_Beg(struct node**list){
    struct node *temp=*list;
    char x;
    (*list)=(*list)->next;
    x=temp->info;
    free(temp);
    return x;
}
// #######################################################################
// Delete After the node
int Delete_After(struct node**list){
    struct node *p,*q;
    char x;
    p=*list;
    if(p!=NULL && p->next!=NULL){
        q=p->next;
        p->next=q->next;
        x=q->info;
        free(q);
        return x;
    }
    else{
        exit(1);
    }
}
// #######################################################################
// Deletion At the end
int Delete_End(struct node**list){
    struct node *p,*q;
    p=*list;
    q=NULL;
    char x;
    while(p->next!= NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}
// #######################################################################
//tarversing the link list
void Traversal(struct node*list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->info<<" ";
        t=t->next;
    }
    cout<<endl;
}
struct node*concatination(struct node**l1 , struct node**l2){
    struct node *p;
    p=*l1;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*l2;
    return 0;
}
void Vowels_at_beg(struct node**l1){
    struct node*p,*q;
    p=(*l1);
    q=NULL;
    while(p!=NULL){
        if((p->info)=='a'||(p->info)=='e'||(p->info)=='i'||(p->info)=='o'||(p->info)=='u'){
            if(q==NULL){
                char x=p->info;
                p=p->next;
                Delete_Beg(l1);
                Insert_Beg(&(*l1),x);
            }
            else{
                char x=p->info;
                p=p->next;
                Delete_After(&q);
                Insert_Beg(l1,x);
            }
        }
        else{
            q=p;
            p=p->next;
        }
    }
    Traversal((*l1));
}
void Vowels_at_beg2(struct node**l1,struct node**l2){
    struct node*p,*q;
    p=(*l1);
    q=NULL;
    while(p!=NULL){
        if((p->info)=='a'||(p->info)=='e'||(p->info)=='i'||(p->info)=='o'||(p->info)=='u'){
            if(q==NULL){
                char x=p->info;
                p=p->next;
                Delete_Beg(l1);
                Insert_Beg(&(*l2),x);
            }
            else{
                char x=p->info;
                p=p->next;
                Delete_After(&q);
                Insert_Beg(l2,x);
            }
        }
        else{
            q=p;
            p=p->next;
        }
    }
    concatination(l2,l1);
    Traversal((*l2));
}
int main(){
    struct node*l1;
    l1=NULL;
    struct node*l2;
    l2=NULL;
    Insert_End(&l1,'a');
    Insert_End(&l1,'b');
    Insert_End(&l1,'c');
    Insert_End(&l1,'d');
    Insert_End(&l1,'e');
    Insert_End(&l1,'f');
    //
    Traversal(l1);
    //
    cout<<"Order not Maintained"<<endl;
    Vowels_at_beg(&l1);
    //
    cout<<"Order Maintained"<<endl;
    Vowels_at_beg2(&l1,&l2);
}