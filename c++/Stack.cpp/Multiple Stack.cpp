#include<bits/stdc++.h>
using namespace std;
int t[10];
void MS_Initialize(int n,int m){
    for(int i=0 ; i<m ; i++){
        t[i]=(n/m)*i-1;
    }
}
void MSpush(int a[],int i,int x,int n,int m){
    if(t[i]==(n/m)*(i+1)-1){
        cout<<"Stack Overflows";
        exit(1);
    }
    else{
        t[i]++;
        a[t[i]]=x;
        
    }
}
int MSpop(int a[],int i,int n,int m){
    if(t[i]==(n/m)*i-1){
        cout<<"Stack underflows";
        exit(1);
    }
    int x=a[t[i]];
    t[i]--;
    return x;
}
int main(){
    int n,m;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter number of stack :- ";
    cin>>m;
    MS_Initialize(n,m);
    cout<<"Stack 1 :- ";
    MSpush(a,1,100,n,m);
    MSpush(a,1,200,n,m);
    MSpush(a,1,300,n,m);
    MSpush(a,1,400,n,m);
    cout<<MSpop(a,1,n,m)<<" ";
    cout<<MSpop(a,1,n,m)<<" ";
    cout<<MSpop(a,1,n,m)<<" ";
}