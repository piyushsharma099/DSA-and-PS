#include "link.h"
#include<stdio.h>
struct node *delocc(struct node **start,int x)
{
    struct node *p,*q;
    p=*start;
    q=NULL;
    while(p!=NULL)
    {
        if (p->info==x)
        {
            if (q==NULL)
            {
                p=p->Next;
                DelBeg(start);
            }
            else
            {
                p=p->Next;
                DelAft(&q);
            }
        }
        else
        {
            q=p;
            p=p->Next;
        }
    }
    p=*start;
    return p;
}
int main()
{
    struct node *p,*a;
    int x=3;
    p=NULL;
    InsBeg(&p,3);
    InsBeg(&p,2);
    InsBeg(&p,3);
    InsBeg(&p,4);
    InsBeg(&p,5);
    InsBeg(&p,3);
    InsBeg(&p,5);
    InsBeg(&p,3);
    Traverse(&p);
    printf("\n");
    a=delocc(&p,x);
    Traverse(&a);
    return 0;
}