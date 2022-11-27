#include<bits/stdc++.h>
using namespace std;
void input(int n , int *p){
    for(int i=0 ; i<n ; i++){
        cin>>*(p+i);
    }
}
void output(int n , int *p){
    for(int i=0 ; i<n ; i++){
        cout<<*(p+i)<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int *p;
    p=(int*)malloc(sizeof(int)*n);

    input(n,p);
    output(n,p);
}