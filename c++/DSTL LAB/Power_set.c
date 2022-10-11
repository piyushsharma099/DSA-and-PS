#include<stdio.h>
#include<math.h>
void subSt(int arr[] , int n){
      int l1 = pow(2,n);
            printf("{ ");
        for(int i=0;i<l1;i++){
            printf("(");
            for(int j=0;j<n;j++){
                if( (i>>j)&1 == 1 ) printf("%d ",arr[n-1-j]);
            }
            printf(")");
            printf(",");
        }
        printf(" }");
}
int main(){
      int n;
        scanf("%d",&n);
          int arr[n];
           for(int i=0;i<n;i++) scanf("%d",&arr[i]);
           subSt(arr,n);
return 0;
}