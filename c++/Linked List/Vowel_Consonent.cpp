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
void vowel_consonent(struct node**l1){
    struct node*p,*q,*r;;
    p=(*l1);
    q=(*l1);
    r=(*l1)->next;
    while(q!=NULL){
        if((q->info)=='a'||(q->info)=='e'||(q->info)=='i'||(q->info)=='o'||(q->info)=='u'){
            q=q->next;
            Delete_After(&r);
            if((p->info)=='a'||(p->info)=='e'||(p->info)=='i'||(p->info)=='o'||(p->info)=='u'){
                Insert_After(&p,q->info);
                p=p->next;
            }
            else{
                Insert_Beg(l1,q->info);
                p=(*l1);         
            }
        }
        else{
            r=r->next;
            q=q->next;
        }
    }
    Traversal((*l1));
}

int main(){
    struct node*l1;
    l1=NULL;
    Insert_End(&l1,'a');
    Insert_End(&l1,'b');
    Insert_End(&l1,'c');
    Insert_End(&l1,'d');
    Insert_End(&l1,'e');
    Insert_End(&l1,'f');
    //
    Traversal(l1);
    //
    vowel_consonent(&l1);
}