#include<stdio.h>
int Quicksort(int A[100],int low,int high){
  if(low<high){
    int j=Partition(A,low,j-1);
    Quicksort(A,low,j-1);
    Quicksort(A,j+1,high);
      }
  }
int Partition(int *A[100],int low,int high){
  int i=low;
  int j=high+1;
  int pivot=A[low];

 
    
      do
        {
      i++;
          }
      while(A[i]<pivot);
    
   
      
        do
        {
        j--;
          }
        while(A[j]>pivot);
      
    if (i<j)
      exchange(A[i],A[j]);
    while (i>j){
        exchange(A[j],A[low]);
    }
    return j;
}
int exchange(int i,int j,int a[100])
      {
        int t;
        {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
          }
        return 0;
        }
int main(){
  int A[100] ;
  int n,low,high,i;
  printf("Enter size:");
  scanf("%d",&n);
  printf("Enter elements:");
  for(i=0;i<n;i++)
    scanf("%d",A[i]);
  low=A[0];
  high=A[n-1];
  Quicksort(A[n],low,high);
  
  for(i=0;i<n;i++)
    {
    printf("%d ",A[i]);
    }
  return 0;
}
        

