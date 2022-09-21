#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort( int a[] , int n ){
    int i,j,flag=1,temp=0;
        for(i=1 ; i<=n-1 ; i++)
        {
                for(j=0 ; j<=n-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
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
    Bubble_Sort( a , n );
}