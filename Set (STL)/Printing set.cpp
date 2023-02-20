#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(1);
    for(auto i:s){
        cout<<i<<" ";
    }
}