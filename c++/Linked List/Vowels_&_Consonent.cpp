#include <stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node *Next;
}; 
/*********/
 char DelAft(struct Node **p)
 {
 char x;
 struct Node *q;
 q=(*p)->Next;
 (*p)->Next=q->Next;
 x=q->data;
 free(q);
 return x;
 }
/********/
struct Node* GetNode()
{
  struct Node *p;
  p=(struct Node*)malloc(sizeof(struct Node));
  return p;
}
/*******/
void InsBeg(struct Node **START,char x)
{
  struct Node *p;
  p=GetNode();
  p->data=x;
  p->Next=*START;
  *START=p;
}
/******/
char DelBeg(struct Node **START)
 {
 struct Node *p;
 char x;
 p=(*START);
 (*START)=(*START)->Next;
 x=p->data;
 free(p);
 return x;
 }
 /******/
void InsEnd(struct Node **START,char x)
{
  struct Node *q,*p;
  q=*START;
  if(q==NULL)
  {
    InsBeg(START,x);
  }
  else
  {
    while(q->Next!=NULL)
    q=q->Next;
    p=GetNode();
    p->data=x;
    p->Next=NULL;
    q->Next=p;
    }
}
/*******/
void InsAft(struct Node **p,char x)
 {
 struct Node *q;
 q=GetNode();
 q->data=x;
 q->Next=(*p)->Next;
 (*p)->Next=q;
 }
void Traverse(struct Node **START)
{
  struct Node *p;
  p=*START;
  while(p!=NULL)
    {
      printf("%c\t",p->data);
      p=p->Next;
    }
}
struct Node *order(struct Node **start)
{
  struct Node *p,*c,*n;
  p=NULL;
  c=NULL;
  n=*start;
  while((n!=NULL)&&(n->data=='a'||n->data=='e'||n->data=='i'||n->data=='o'||n->data=='u'))
  {
      p=n;
      c=n;
      n=n->Next;
  }
  while(n!=NULL)
  {
    if(n->data=='a'||n->data=='e'||n->data=='i'||n->data=='o'||n->data=='u')
    {
      if(p==NULL)
      {
        InsBeg(start,n->data);
        p=*start;
        n=n->Next;
        DelAft(&c);  
      }
      else
      {
        InsAft(&p,n->data);
        p=p->Next;
        n=n->Next;
        DelAft(&c);
      }
    }
    else
    {
      c=n;
      n=n->Next;
    }
  }
  return *start;
}
int main()
{
  struct Node *p,*q;
  p=NULL;
  InsBeg(&p,'u');
  InsBeg(&p,'o');
  InsBeg(&p,'i');
  InsBeg(&p,'e');
  InsBeg(&p,'a');
  q=order(&p);
  Traverse(&q);
    
}