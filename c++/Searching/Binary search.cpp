#include<iostream>
using namespace std;
int main(){
    int n ,x ,i,s,e,mid;
    int a[10];
    cout<<"enter the number of element in the array :- ";
    cin>>n;
    cout<<"enter the array elements :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched :- ";
    cin>>x;
    s=0;
    e=n-1;
    mid=(s+e)/2;
    while( (s<=e) && (x!=mid) ){
        if(x>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    mid=(s+e)/2;
    if(a[mid]==x){
        cout<<"element is founded at position "<<mid+1;
    }
    else{
        cout<<"element not found";
    }
}