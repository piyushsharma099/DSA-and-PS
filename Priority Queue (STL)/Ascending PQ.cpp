#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>maxpq;
    maxpq.push(8);
    maxpq.push(6);
    maxpq.push(4);
    maxpq.push(3);
    maxpq.push(9);
    maxpq.push(1);
    maxpq.push(0);
    maxpq.push(2);

    cout<<maxpq.top();    // Displaying Top element
    cout<<endl;

    maxpq.pop();         // Removing Top element
    cout<<maxpq.top();
    cout<<endl;
    int x=maxpq.size();
    for(int i=0 ; i<x ; i++){
        cout<<maxpq.top()<<" ";
        maxpq.pop();
    }
}
