#include<iostream>
using namespace std;
int main(){
    int n ,x ,i,pos=-1;
    int a[10];
    cout<<"enter the number of element in the array :- ";
    cin>>n;
    cout<<"enter the array elements :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"enter the element to be searched :- ";
    cin>>x;
    for(i=0 ; i<n ; i++){
        if(a[i]==x){
            pos=i;
            break;
        }
    }
    if(pos>=0){
        cout<<"element is founded at the position "<<pos+1;
    }
    else{
        cout<<"element not found";
    }


    
}