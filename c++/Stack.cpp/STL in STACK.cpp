#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    // Pushing the element in a Stack
    s.push(12);
    s.push(24);
    s.push(35);
    s.push(43);
    s.push(25);
    s.push(96);
    // Top element in a Stack
    cout<<s.top()<<" ";
    // Removing the top element
    s.pop();
    cout<<s.top()<<" ";
    // Checking is the stack empty or not
    if(s.empty()){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE"<<" ";
    }
    // Size of the stack
    cout<<s.size()<<" ";

}