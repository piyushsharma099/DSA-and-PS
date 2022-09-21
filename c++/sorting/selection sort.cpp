#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(int a[],int n){
    int i , j , min , temp=0;
    for(i=0 ; i<=n-1 ; i++){
        min=i;
        for(j=i+1 ; j<n ; j++){
            if(a[j]<a[min]){
                min=j;
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;

            }
        }
    }
    for(j=0 ; j<n ; j++){
        cout<<a[j]<<" ";
    }
}
int main(){
    int n,i,a[10];
    cout<<"Enter number of element :- ";
    cin>>n;
    cout<<"Enter the array element :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    Selection_Sort( a , n );
}