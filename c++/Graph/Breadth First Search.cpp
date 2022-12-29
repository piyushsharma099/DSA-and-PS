#include<bits/stdc++.h>
using namespace std;
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
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
    vector<int> status(n,0);
    queue<int>Q;
    status[0]=1;
    Q.push(0);
    cout<<"Order of BFS is : ";
    while(Q.size()!=0){
        int x=Q.front();
        cout<<x<<" , ";
        Q.pop();
        for(int k=0 ; k<adj[x].size() ; k++){
            int e=adj[x][k];
            if(status[e]==0){
                status[e]=1;
                Q.push(e);
            }
        }
    }
}