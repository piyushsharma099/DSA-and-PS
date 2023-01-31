#include<bits/stdc++.h>
using namespace std;

void TS(vector<int>adj[] , int v){
    int indeg[v] = {0};
    for(int i=0;i<v;i++){
        for(auto k : adj[i]){
            indeg[k]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto j : adj[node]){
            indeg[j]--;
            if(indeg[j] == 0){
                q.push(j);
            }
        }
    }
    for(int i:ans){
        cout<<i<<" ";
    }
}

int main(){
    int e,i,a,b;
    cout<<"Enter The Number Of vertices :- ";
    int v;
    cin>>v;
    vector<int>InDeg(v);
    vector<int>OutDeg(v);
    vector<int>adj[v];
    cout<<"Enter the Number Of edges :- "; 
    cin>>e;
    for(int i=1; i<=e ; i++){
        cout<<"Enter the end points :- ";
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }
    for(int i=0 ; i<v ; i++){
        int j=0;
        OutDeg[i]=adj[i].size(); // for indegree
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            InDeg[adj[i][j]]++; // for outdegree
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"InDegree and OutDegree are "<<endl;
    for(int i=0 ; i<v ; i++){
        cout<<i<<" In = "<<InDeg[i]<<" out = "<<OutDeg[i]<<endl;
    }
    cout<<endl;
    TS(adj , v);
    cout<<endl;
}