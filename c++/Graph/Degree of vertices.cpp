#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cout<<"Enter number of vertices :- ";
    cin>>v;
    cout<<"Enter number of edges :- ";
    cin>>e;
    vector<int>li[v];
    for(int i=0 ;i<e ; i++){
        int a,b;
        cout<<"Enter the end points of edges:- ";
        cin>>a>>b;
        li[a].push_back(b);
        li[b].push_back(a);
    }
    cout<<"Adjacency list is "<<endl;
    for(int i=0 ; i<=v ; i++){
        cout<<i<<" --> ";
        cout<<li[i].size();
        cout<<endl;
    }
}