#include<bits/stdc++.h>
using namespace std;
void traverse(int *p , int n){
    for(int i=0 ; i<n ; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
}
void traverse2(int *a , int n){
    for(int i=0 ; i<n ; i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    traverse(a,10);
    traverse2(a,10);

}