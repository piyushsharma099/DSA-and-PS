#include<stdio.h>
#include<math.h>
void range(int n)
{
    int date[n];
    date[0]=0;
    int x=sqrt(n);
    for(int i=2;i<=x;i++)
    {int b=i;
        if(date[i]==0)
        {
            for(int j=b+1;j<=n;j++)
        {
            if(date[j]==0)
            {
                if(j%b==0)
                {
                date[j]=date[j]+1;
                }
            }
        }
            
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(date[i]==0)
        {
            printf("%d ",i);
        }
    }


}
int main()
{
    int a;
    scanf("%d",&a);
    range(a);
}