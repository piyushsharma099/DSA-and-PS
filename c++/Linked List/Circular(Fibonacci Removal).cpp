#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node*getnode(struct node**list){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node*Insert_Beg(struct node**l1 , int x){
    struct node*p,*q;
    p=getnode(l1);
    p->info=x;
    if((*l1)!=NULL){
        p->next=(*l1)->next;
        (*l1)->next=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
    }
    return 0;
}
struct node*Ins_End(struct node**l1 , int x){
    struct node*p;
    p=getnode(l1);
    p->info=x;
    if((*l1)!=NULL){
        p->next=(*l1)->next;
        (*l1)->next=p;
        (*l1)=p;
    }
    else{
        (*l1)=p;
        (*l1)->next=p;
    }
    return 0;   
}
struct node*Inst_Aft(struct node**l1 , int x){
    struct node*q,*p;
    q=*l1;
    if(q==NULL){
        cout<<"Void Insertion";
        exit(1);
    }
    else{
        p=getnode(l1);
        p->info=x;
        p->next=q->next;
        q->next=p;
    }
    return 0;
}
int Del_Beg(struct node**l1){
    struct node*p;
    p=(*l1)->next;
    (*l1)->next=p->next;
    if((*l1)->next==(*l1)){
        (*l1)=NULL;
    }
    int x=p->info;
    free(p);
    return x;
}
int Del_End(struct node**l1){
    struct node*q,*p;
    q=(*l1);
    p=(*l1)->next;
    if((*l1)->next==(*l1)){
        (*l1)=NULL;
    }
    else{
        while(p->next!=(*l1)){
            p=p->next;
        }
        p->next=(*l1)->next;
        (*l1)=p;
    }
    int x=q->info;
    free(q);
    return x;
}
int Del_Aft(struct node**q){
    struct node*p;
    p=(*q)->next;
    (*q)->next=p->next;
    int x=p->info;
    free(p);
    return x;
}
struct node*Traversal(struct node*l1){
    struct node*p;
    p=l1->next;
    while(p!=l1){
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info;
    cout<<endl;
    return 0;
}
int maxe(struct node**l1){
    int max=INT_MIN;
    struct node*p;
    p=(*l1)->next;
    while(p!=(*l1)){
        if(max<p->info){
            max=p->info;
            p=p->next;
        }
        else{
            p=p->next;
        }
    }
    if(max<p->info){
        max=p->info;
        return max;
    }
    else{
        return max;
    }
}
int maxe2(int *a , int n){
    int m=INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(m<a[i]){
            m=a[i];
        }
    }
    return m;
}
void pattern2(struct node**l1){
    struct node*p,*q;
    p=(*l1)->next;
    q=(*l1);
    int m=maxe(&(*l1));
    // Fibonacci DAT
    int i,c=0;
    int f[m]={0};
    f[0]=0;
    f[1]=1;
    for(i=2 ; i<m ; i++){
        f[i]=f[i-1]+f[i-2];
        if(f[i]>m){
            break;
        }
        c++;
    }
    int m2=maxe2(f,c);
    
    int dat[m2+1]={0};
    for(int i=0 ; i<m2+1 ; i++){
        dat[f[i]]=1;
    }
    while(p!=(*l1)){
        if(dat[p->info]==1){
            p=p->next;
            Del_Aft(&q);
        }
        else{
            q=p;
            p=p->next;
        }
    }
    if(dat[p->info]==1){
            Del_Aft(&q);
            (*l1)=q;
    }
    Traversal((*l1));
}
int main(){
    struct node*l1;
    l1=NULL;
    Ins_End(&l1,1);
    Ins_End(&l1,2);
    Ins_End(&l1,3);
    Ins_End(&l1,4);
    Ins_End(&l1,8);
    Ins_End(&l1,25);
    Ins_End(&l1,15);
    Ins_End(&l1,5);
    //
    Traversal(l1);
    //
    pattern2(&l1);
}