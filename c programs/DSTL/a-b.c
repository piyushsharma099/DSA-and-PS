#include<stdio.h>
int main(){
    
    int a[10], b[10], c[20];
    int m, n;
    
     printf("Enter the size of first array :- ");
     scanf("%d",&m);
     printf("Enter the elements of first array :- ");
     for(int i=0;i<=m-1;i++){
         scanf("%d",&a[i]);
     }
     printf("Enter the size of second array :- ");
     scanf("%d",&n);
     printf("Enter the elements of second array :- ");
     for(int j=0;j<=n-1;j++){
        scanf("%d",&b[j]);
    }
    
    //logic
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            j++;
        } 
        else{
            i++;

            j++;
        }
    }
    while(i<m){
        c[k]=a[i];
        i++;
        k++;
    }
    printf("array1 - array2 :- ");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    } 
    return 0;
}
