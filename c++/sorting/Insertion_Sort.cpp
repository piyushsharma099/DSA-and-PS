#include<bits/stdc++.h>
using namespace std;
void Insertion_Sort(int *a , int n){
    for(int i=1; i<n; i++) {
        int x=a[i];
        int j=i-1;
        while (a[j]>x && j >= 0){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=x;
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n,i,a[10];
    cout<<"Enter number of element :- ";
    cin>>n;
    cout<<"Enter the a element :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    Insertion_Sort(a,n);
}