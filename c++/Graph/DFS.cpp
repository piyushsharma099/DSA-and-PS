#include<bits/stdc++.h>
using namespace std;
void DFS_Visit(vector<int>adj[] , vector<int>&status , int i){
    status[i]=1;
    cout<<i<<" ";
    for(int j=0 ; j<adj[i].size() ; j++){
        if(status[adj[i][j]]==0){ 
            DFS_Visit(adj , status , adj[i][j]);
        }
    }
}
void DFS(vector<int>adj[] , int n){
    vector<int>status(n);
    for(int i=0 ; i<n ; i++){
        if(status[i]==0){
            DFS_Visit(adj , status , i);
        }
    }
}
int main(){
    int n,e,i,a,b;
    cout<<"Enter The Number Of vertices :- ";
    cin>>n;
    vector<int>adj[n];
    cout<<"Enter the Number Of edges :- "; 
    cin>>e;
    for(int i=1; i<=e ; i++){
        cout<<"Enter the end points :- ";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        int j=0;
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"DFS ORDER IS :- ";
    DFS(adj , n);
    
}