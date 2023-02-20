#include<bits/stdc++.h>
using namespace std;
int Vertex_Visit(vector<int>adj[] , vector<int>&status , int i){
    if(status[i]==true){
        return true;
    }
    status[i]==true;
    int flag=false;
    for(int j=0 ; j<adj[i].size() ; j++){
        flag=Vertex_Visit(adj , status , adj[i][j]);
        if(flag==1){
            return true;
        }
    }
    return false;
}
int cycledetection(vector<int>adj[] , int n){
    int check=false;
    vector<int>status(n,0);
    for(int i=0 ; i<n ; i++){
        status[i]=true;
        for(int j=0 ; j<adj[i].size() ; j++){
            check=Vertex_Visit(adj , status , i);
            if(check==1){
                return true;
            }
        }
        status[i]=false;
    }
    return false;
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
        //adj[b].push_back(a);
    }
    for(int i=0 ; i<n ; i++){
        int j=0;
        cout<<i<<" : ";
        for(int j=0 ; j<adj[i].size() ; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    int check=cycledetection(adj,n);
    if(check==1){
        cout<<"A cycle is detected in the graph";
    }
    else{
        cout<<"There is no Cycle in the graph";
    }
    
}