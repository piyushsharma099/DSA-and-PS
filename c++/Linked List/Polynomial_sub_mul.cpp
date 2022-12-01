#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
int exp;
struct node *Next;
}; 
/********************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*******************/
void InsBeg(struct node** START,int x,int y)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->exp=y;
    p->Next=*START;
    *START=p;
}
/****************/
void InsEnd(struct node **START,int x,int y)
{
  struct node *q,*p;
  q=*START;
  if(q==NULL)
  {
    InsBeg(START,x,y);
  }
  else
  {
    while(q->Next!=NULL)
    q=q->Next;
    p=GetNode();
    p->info=x;
    p->exp=y;
    p->Next=NULL;
    q->Next=p;
    }
}
/*****************/
void InsAft(struct node **p,int x,int y)
{
    struct node *q;
    q=GetNode();
    q->info=x;
    q->exp=y;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
/*************************************/
 void DelAft(struct node **p)
 {
 //int x;
 struct node *q;
 q=(*p)->Next;
 (*p)->Next=q->Next;
 //x=q->info;
 free(q);
 //return x;
 }
 /*************************************/
void orderedinsert(struct node **START,int x,int y)
{
    struct node*p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL&&y<=p->exp)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
    InsBeg(START,x,y);
    else
    InsAft(&q,x,y);
}
void Traverse(struct node **START)
{
  struct node *p;
  p=*START;
  while(p!=NULL)
    {
      printf("%dx^%d ",p->info,p->exp);
      p=p->Next;
    }
}

struct node *addition(struct node **p4,struct node **p1)
{
    struct node *p2,*a,*b;
    p2=NULL;
    a=*p4;
    b=*p1;
    while (a!=NULL && b!=NULL)
    {
        if (a->exp==b->exp)
        {
            InsEnd(&p2,a->info+b->info,a->exp);
            a=a->Next;
            b=b->Next;
        }
        else
        {if(a->exp > b->exp)
            {
                InsEnd(&p2,a->info,a->exp);
                a=a->Next;
            }
        else
        {
            InsEnd(&p2,b->info,b->exp);
                b=b->Next;
        }
        }
    }
    while(a!=NULL)
    {
        InsEnd(&p2,a->info,a->exp);
        a=a->Next;
    }
    while(b!=NULL)
    {
        InsEnd(&p2,b->info,b->exp);
        b=b->Next;
    }
    return p2;
}
/********************/
struct node *subtraction(struct node **p4,struct node **p1)
{
    struct node *p,*p3;
    p=*p1;
    while(p!=0)
    {
        p->info=(p->info)*(-1);
        p=p->Next;
    }
    p3=addition(p4,p1);
    return p3;
}
/*******************/
struct node *multiplication(struct node **p4,struct node **p1)
{
   // printf("hii");
    struct node*p8,*p9,*q,*z;
    p8=NULL;
    q=*p4;
    while(q!=NULL)
    {
        z=*p1;
        while(z!=NULL)
        {
        orderedinsert(&p8,(z->info)*(q->info),(z->exp)+(q->exp));
        z=z->Next;
        }
        q=q->Next;
    }
    p9=p8;
    while(p9->Next!=NULL)
    {
        
        if((p9->exp)==(p9->Next)->exp)
        {
            p9->info=(p9->info)+((p9->Next)->info);
            DelAft(&p9);
        }
        else
        {
            p9=p9->Next;
        }
    }
    return p8;

}
/*******************/
int main()
{
    struct node *p,*q,*z;
    p=NULL;
    q=NULL;
    orderedinsert(&p,5,3);
    orderedinsert(&p,67,2);
    orderedinsert(&p,12,1);
    orderedinsert(&q,23,1);
    orderedinsert(&q,34,2);
    orderedinsert(&q,12,3);
    Traverse(&p);
    printf("\n");
    Traverse(&q);
    z=addition(&p,&q);
    printf("\naddition \n");
    Traverse(&z);
    z=subtraction(&p,&q);
    printf("\n Subtraction \n");
    Traverse(&z);
    //multiplication(&p,&q);
    z=multiplication(&p,&q);
    printf("\nmultiplication\n");
    Traverse(&z);
    
    
}