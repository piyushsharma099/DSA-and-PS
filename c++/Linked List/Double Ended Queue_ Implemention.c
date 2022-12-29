#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *Next;
    struct node *Prev;
};
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
void initialise(struct node **rear,struct node **front)
{
    (*rear)=NULL;
    (*front)=NULL;
}
int IsEmpty(struct node **rear,struct node **front)
{
    if((*front)==NULL)
    {
        return 1;
    }
    else
    return 0;
}
void InsFront(struct node **rear,struct node **front,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Prev=NULL;
    p->Next=(*front);
    if((*front)!=NULL)
    {
        (*front)->Prev=p;
    }
    else
    (*rear)=p;
    (*front)=p;
}
void InsRear(struct node **rear,struct node **front,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    p->Prev=(*rear);
    if((*rear)!=NULL)
    {
        (*rear)->Next=p;
    }
    else
    (*front)=p;
    (*rear)=p;
}
int DelFront(struct node **rear,struct node **front)
{
    if(!IsEmpty(rear,front))
    {
    struct node *p;
    int x;
    p=(*front);
    (*front)=(*front)->Next;
    x=p->info;
    free(p);
    if((*front)==NULL)
    {
        (*rear)==NULL;
    }
    else
    {
        (*front)->Prev=NULL;
    }
    return x;
    }
    else
    {
        printf("void deletion");
        exit(1);
    }
}
int DelRear(struct node **rear,struct node **front)
{
if(!IsEmpty((rear),(front)))
{
    struct node *p;
    int x;
    p=(*rear);
    (*rear)=(*rear)->Prev;
    x=p->info;
    free(p);
    if((*rear)==NULL)
    {
        (*front)=NULL;
    }
    else
    (*rear)->Next=NULL;
    return x;
}
else
{
    printf("void deletion");
    exit(1);
}
}
void traverse(struct node **rear,struct node **front)
{
    if((*front)!=NULL)
    {
        struct node *p;
        p=(*front);
        while(p!=(*rear))
        {
            printf("%d ",p->info);
            p=p->Next;
        }
        printf("%d ",p->info);
    }
    else
    {
        printf("queue is empty");
        exit(1);
    }
}
int main()
{
    struct node *rear,*front;
    initialise(&rear,&front);
    InsFront(&rear,&front,1);
    InsFront(&rear,&front,2);
    InsFront(&rear,&front,3);
    InsFront(&rear,&front,4);
    InsRear(&rear,&front,5);
    traverse(&rear,&front);
}