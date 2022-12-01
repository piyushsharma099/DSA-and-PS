#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
};
/******************************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/******************************/
void InsBeg(struct node**CSTART,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if(*CSTART!=NULL)
    {
      p->Next=(*CSTART)->Next;
      (*CSTART)->Next=p;
    }
    else
    {
      *CSTART=p;
      (*CSTART)->Next=p;
    }
}
/******************************/
void InsEnd(struct node**CSTART,int x)
{
  struct node *p;
  p=GetNode();
  p->info=x;
  if (*CSTART!=NULL)
  {
    p->Next=(*CSTART)->Next;
    (*CSTART)->Next=p;
    *CSTART=p;
  }
  else
  {
    *CSTART=p;
    (*CSTART)->Next=p;
  }
}
/******************************/
void InsAft(struct node**CSTART,int x)
{
  struct node *p;
  if(*CSTART==NULL)
  {
    printf("void insertion");
    exit(1);
  }
  else
  {
    p=GetNode();
    p->info=x;
    p->Next=(*CSTART)->Next;
    (*CSTART)->Next=p;
  }
}
/******************************/
int DelBeg(struct node**CSTART)
{
  int x;
  struct node *p;
  p=(*CSTART)->Next;
  (*CSTART)->Next=p->Next;
  if((*CSTART)->Next==*CSTART)
  {
    *CSTART=NULL;
  }
  x=p->info;
  free(p);
  return x;
}
/******************************/
int DelEnd(struct node**CSTART)
{
  int x;
  struct node *p,*q;
  p=*CSTART;
  while (p->Next!=*CSTART)
  {
    p=p->Next; 
  }
  p->Next=(*CSTART)->Next;
  q=*CSTART;
  *CSTART=p;
  x=q->info;
  free(q);
  return x;
}
/******************************/
int DelAft(struct node**CSTART)
{
  int x;
  struct node *p;
  p=(*CSTART)->Next;
  (*CSTART)->Next=p->Next;
  x=p->info;
  free(p);
  return x;
}
/******************************/
void Traverse(struct node **CSTART)
{
  struct node *p;
  p=(*CSTART)->Next;
  while (p!=*CSTART)
  {
    printf("%d ",p->info);
    p=p->Next;
  }
  printf("%d ",p->info);
}
/******************************/
// struct node pattern(struct node*p)
// {
//     struct node *q,*r;
//     r=(p)->Next;
//     int sum=0;
//     while(r!=*p)
//     {
//         sum=r->info+sum;
//         r=r->Next;
//     }
//     sum=r->info+sum;
//     q=(p)->Next;
//     while(q!=*p)
//     {
//         q->info=sum-(q->info);
//         q=q->Next;
//     }
//     q->info=sum-q->info;
//     return *p;

// }
void fibo(int x)
{
    int DAT[x+1];
    DAT[0]=0;
    printf("%d",DAT[0]);
    int f[x+1];
    f[0]=0;
    f[1]=1;
    int i=1;
    while(f[i]<x)
    {
        i++;
        f[i]=f[i-1]+f[i-2];
    }
    // int DAT[x+1];
    //     DAT[0]=0;
    // printf("%d",DAT[0]);
}
/******************************/
int main()
{
    struct node *cstart,*p;
    int m=0;
    InsBeg(&cstart,5);
    InsBeg(&cstart,4);
    InsBeg(&cstart,3);
    InsBeg(&cstart,2);
    InsBeg(&cstart,1);
    p=cstart;
    Traverse(&p);
    
    Traverse(&p);
    //p=cstart;
   // Traverse(&cstart);
    // printf("\n");
    // Traverse(&cstart);    
}