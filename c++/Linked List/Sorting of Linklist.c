#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
}; 
/***********************/
struct node *START;
/********************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*******************/
void InsBeg(int x)
{
  struct node *p;
  p=GetNode();
    p->info=x;
  p->Next=START;
  START=p;
}
/****************/
void InsEnd(int x)
{
  struct node *q,*p;
  q=START;
  while(q->Next!=NULL)
    q=q->Next;
  p=GetNode();
  p->info=x;
  p->Next=NULL;
  q->Next=p;
}
/*****************/
int Traverse()
{
  struct node *p;
  p=START;
  int c=0;
  printf("\n");
  while(p!=NULL)
    {
      printf("%d  ",p->info);
      p=p->Next;
      //c++;
    }
  return c;
}
/***************/
void bubble(int n)
{
    struct node *p;
    struct node *q;
    for(int i=0;i<n;i++)
    {
      p=START;
      q=p->Next;
        for(int j=0;j<n-1-i;j++)
        {
            if((p->info)>(q->info))
            {
              int t=p->info;
              p->info=(q->info);
              (q->info)=t;
            }
            q=q->Next;
            p=p->Next;
        }
    }
}
/**********/
int count()
{
  struct node *p;
  p=START;
  int c=0;
  while(p!=NULL)
    {
      //("%d  ",p->info);
      c++;
      p=p->Next;
    }
  return c;
}
/**********/
void display()
{
  struct node *p;
  p=START;
  //int c=0;
  while(p!=NULL)
    {
      printf("%d  ",p->info);
      p=p->Next;
      //c++;
    }
  //return c;
}
/**********/
int main()
{
    START=NULL;
    InsBeg(5);
    InsBeg(43);
    InsBeg(2);
    InsBeg(87);
    InsBeg(45);
    InsBeg(34);
    InsBeg(2);
    InsBeg(90);
    InsBeg(900);
  bubble(count());
  Traverse();

}