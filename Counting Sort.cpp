#include <iostream>
using namespace std;
void countingsort(int a[] , int n , int max ){
    int i , j , ans[20] ;
    int c[max+1]={0};
    for(i=0 ; i<n ; i++){
        c[a[i]]++;
    }
    for(i=1 ; i<max+1 ; i++){
        c[i]=c[i]+c[i-1];
    }
    for(j=n-1 ; j>=0 ; j--){
        ans[c[a[j]]-1]=a[j];
        c[a[j]]--;
    }
    for (i=0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n=10 , max=0 , i , a[10];
    cout<<"enter 10 numbers :- ";
    for(i=0 ; i<10 ; i++){
        cin>>a[i];
    }
    for(i=0 ; i<n ; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    countingsort(a,n,max);
    return 0;
   
}