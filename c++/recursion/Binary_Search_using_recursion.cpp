#include<iostream>
using namespace std;
int Binary_Search(int a[],int s,int e,int x) {
   if(s <= e) {
      int m = (s + (e - s) /2); 
      if(a[m] == x)
         return m;
      if(a[m] > x)
         return Binary_Search(a, s, m-1, x);
         return Binary_Search(a, m+1, e, x);
   }
   return -1;
}
int main(){
    int n,i,x,s,e;
    int a[10];
    cout<<"Enter the size of the array :- ";
    cin>>n;
    cout<<"Enter array element :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"Enter the Element to be searched :- ";
    cin>>x;
    s=0;
    e=n-1;
    cout<<Binary_Search(a,s,e,x);
}