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
        //adj[b].push_back({a,cost});
    }
    for(int i=0 ; i<n ; i++){
        int j=0;
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            cout<<"("<<adj[i][j].first<<","<<adj[i][j].second<<") ";
        }
        cout<<endl;
    }
    vector<int>DA(n,1);
    vector<int>distance(n,INT_MAX);
    vector<int>predecessor(n,-1);
    distance[0]=0;
    priority_queue< ip , vector<ip> , greater<ip>>pq;
    int source;
    cout<<"Enter the source vertex :- ";
    cin>>source;
    pq.push({0,source});
    distance[source]=0;
    for(int i=0 ; (i<n) && (i!=source) ; i++){
        pq.push({INT_MAX,i});
    }
    for(int i=1 ; i<n ; i++){
        pair<int,int>x;
        x=pq.top();
        pq.pop();
        int v=x.second;
        DA[v]=1;
        for(int j=0 ; j<adj[v].size() ; j++){
            int vertex=adj[v][j].first;
            int weight=adj[v][j].second;
            if(DA[vertex]==1 && distance[vertex] > weight+distance[v]){
                distance[vertex]=weight+distance[v];
                predecessor[vertex]=v;
                pq.push({distance[vertex],vertex});
            }
        }
    }
    cout<<"Shortest Path is is "<<endl;
    cout<<"vertex  distance  "<<"predecessor"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<i<<"       "<<distance[i]<<"             "<<predecessor[i]<<endl; 
    }
}