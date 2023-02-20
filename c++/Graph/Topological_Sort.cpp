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
    cout<<"Topological Sort : "<<endl;
    while(q.size()!=0){
        int x;
        x=q.front();
        q.pop();
        for(int i=0 ; i<adj[x].size() ; i++){
            indeg[adj[x][i]]--;
            if(indeg[adj[x][i]]==0){
                q.push(adj[x][i]);
            }
        }
        cout<<x<<" ";
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
    TS(adj , v);
    cout<<endl;
}