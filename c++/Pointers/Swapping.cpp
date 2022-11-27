#include<bits/stdc++.h>
using namespace std;
int swaps(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return 0;
}
int main(){
    int a,b;
    cout<<"Enter the values :- ";
    cin>>a>>b;
    swaps(&a,&b);
    cout<<a<<" "<<b;
}