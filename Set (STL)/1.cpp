#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int sum=0;
    int a[]={1,10,2,3,4,12};
    for(int i=0 ; i<6 ; i++){
        sum=sum+a[i];
        s.insert(sum);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
}