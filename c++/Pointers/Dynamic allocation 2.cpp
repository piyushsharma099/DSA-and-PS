#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int *p;
    // p=(int*)malloc(sizeof(int)*n);
    // p=(int*)malloc(0);
    
    for(int i=0 ; i<n ; i++){
        cin>>*(p+i);
    }
    for(int i=0 ; i<n ; i++){
        cout<<*(p+i)<<" ";
    }
}