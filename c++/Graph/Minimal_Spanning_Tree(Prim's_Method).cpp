#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>ip;
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
    vector<int>MST(n);
    vector<int>key(n,INT_MAX);
    vector<int>predecessor(n,-1);
    key[0]=0;
    priority_queue< ip , vector<ip> , greater<ip>>pq;
    pq.push({0,0});
    for(int i=1 ;i<n ; i++){
        pq.push({INT_MAX,i});
    }
    for(int i=1 ; i<n ; i++){
        pair<int,int>x;
        x=pq.top();
        pq.pop();
        int v=x.second;
        MST[v]=1;
        for(int j=0 ; j<adj[v].size() ; j++){
            int vertex=adj[v][j].first;
            int weight=adj[v][j].second;
            if(MST[vertex]==0 && key[vertex]>weight){
                key[vertex]=weight;
                predecessor[vertex]=v;
                pq.push({key[vertex],vertex});
            }
        }
    }
    cout<<"MST is "<<endl;
    cout<<"vertex  key  "<<"predecessor"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<i<<"       "<<key[i]<<"    "<<predecessor[i]<<endl; 
    }
}