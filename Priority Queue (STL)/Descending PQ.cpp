#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>minpq;
    minpq.push(8);
    minpq.push(6);
    minpq.push(4);
    minpq.push(3);
    minpq.push(9);
    minpq.push(1);
    minpq.push(0);
    minpq.push(2);

    cout<<minpq.top();    // Displaying Top element
    cout<<endl;

    minpq.pop();         // Removing Top element

    cout<<minpq.top();
    cout<<endl;

    int x=minpq.size();
    for(int i=0 ; i<x ; i++){
        cout<<minpq.top()<<" ";
        minpq.pop();
    }
}
