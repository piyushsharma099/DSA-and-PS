#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=&a[0];
    for(int i=0 ; i<10 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0 ; i<10 ; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    for(int i=0 ; i<10 ; i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}