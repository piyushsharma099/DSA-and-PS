#include <iostream>
using namespace std;
int main(){
    int max=0,n=8,i;
    int a[10]={1,2,4,5,5,8,6,9};
    for(i=0 ; i<n ; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int c[max+1]={0};
    for(i=0 ; i<n ; i++){
        c[a[i]]=c[a[i]]+1;
    }
    for(i=0 ; i<max ; i++){
        if(c[i]>1){
            cout<<i<<" is repeated"<<endl;
        }
        else if(c[i]==1){
            cout<<i<<" is not repeated"<<endl;
        }
        else if (c[i]==0){
            cout<<i<<" is missing"<<endl;
        }
    }
}
