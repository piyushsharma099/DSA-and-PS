#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e,i,a,b,cost;
    cout<<"Enter The Number Of vertices :- ";
    cin>>n;
    vector<pair<int,int>>adj[n];
    cout<<"Enter the Number Of edges :- "; 
    cin>>e;
    for(int i=1; i<=e ; i++){
        cout<<"Enter the end points followed by cost :- ";
        cin>>a>>b>>cost;
        adj[a].push_back({b,cost});
        adj[b].push_back({a,cost});
    }
    for(int i=0 ; i<n ; i++){
        int j=0;
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            cout<<"("<<adj[i][j].first<<","<<adj[i][j].second<<") ";
        }
        cout<<endl;
    }
}