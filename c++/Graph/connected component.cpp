#include<bits/stdc++.h>
using namespace std;
int DFS_Visit(vector<int>adj[] , vector<int>&status , int i , int x){
    status[i]=1;
    cout<<i<<" ";
    for(int j=0 ; j<adj[i].size() ; j++){
        if(status[adj[i][j]]==0){
            x++;
            x=DFS_Visit(adj , status , adj[i][j] , x);
        } 
    }
    return x;
}
void DFS(vector<int>adj[] , int n){
    vector<int>status(n);
    vector<int>v;  // vector consisting of element in connected components 
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(status[i]==0){
            int e=DFS_Visit(adj , status , i , 1);
            c++;
            v.push_back(e);
        }
    }
    cout<<endl<<"No. of element in connected components "<<c<<endl;
    for(int i=0 ; i<c ; i++){
        cout<<"Component "<<i+1<<" has "<<v[i]<<" elements "<<endl;
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