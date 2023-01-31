#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // all values initialize by zero
    vector<int>v1(5);
    // all values initialize by 6
    vector<int>v2(5,6);

    // printing v1
    for(auto i:v1){
        cout<<i<<" ";
    }
    // printing v2
    cout<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }
}