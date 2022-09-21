#include<iostream>
using namespace std;
int Ternary_Search(int a[] , int n , int x){
    int s=0;
    int e=n-1;
    while(e>=s){
        int m1=s+(e-1)/3;
        int m2=e-(e-1)/3;
        if(a[m1]==x){
            return m1;
        }
        else if(a[m2]==x){
            return m2;
        }
        else if(a[m1]>x){
            e=m1-1;
        }
        else if(a[m2]>x){
            s=m2+1;
        }
        else{
            s=m1+1;
            e=m2-1;
        }
    }
}
int main(){
    int n ,x , i;
    int a[10];
    cout<<"enter the number of element in the array :- ";
    cin>>n;
    cout<<"enter the array elements :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched :- ";
    cin>>x;
    cout<<Ternary_Search(a,n,x);
}