#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n){
    int i=0;
    int temp=n;
    while(i<(n/2)){
        if(a[i]>a[temp-i]){
            i++;
        }
        else if(a[i]<a[temp-i]){
            temp=temp-1;
        }
        else if (a[i]==a[n-i]){
            cout<<i;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    int a[10];
    cout<<"Enter the array :- ";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    fun(a,n);
}