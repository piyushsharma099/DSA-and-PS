#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e,i,a,b;
    cout<<"Enter The Number Of vertices :- ";
    cin>>n;
    vector<int>adj[n];
    vector<int>InDeg(n);
    vector<int>OutDeg(n);
    cout<<"Enter the Number Of edges :- "; 
    cin>>e;
    for(int i=1; i<=e ; i++){
        cout<<"Enter the end points :- ";
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        int j=0;
        OutDeg[i]=adj[i].size(); // for indegree
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            InDeg[adj[i][j]]++; // for outdegree
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
}