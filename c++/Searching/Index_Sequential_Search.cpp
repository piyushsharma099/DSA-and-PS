#include<bits/stdc++.h>
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
int Index_Sequential_Search(int index[],int a[],int x,int n){
    int i=0,e,s; 
    while(i<n && x>a[index[i]]){
        i++;
        if(i<n){
            if(a[index[i]]==x){
                return index[i];
            }
            else{
                e=index[i]-1;
                s=index[i-1]-1;
                return Binary_Search(a,s,e,x);
            }
        }
        else{
            return -1;
        }
    }
    return -1;
}
int main(){
    int n,i,step=0,x,ans;
    int a[10],index[10];
    cout<<"Enter the size of the array :- ";
    cin>>n;
    cout<<"Enter array element :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"Enter the Element to be searched :- ";
    cin>>x;
    // Creating the index array 
    for(i=0 ; i<n ; i++){
        if(step<n){
            index[i]=step;
            step=step+4;
        }
        else{
            break;
        }
    }
    if(index[i-1]!=n-1){
        index[i]=n-1;
    }
    ans=Index_Sequential_Search(index,a,x,n);
    cout<<ans;
}