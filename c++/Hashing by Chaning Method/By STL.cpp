#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    int x,r;
    cout<<"Enter The size of Hash Table :- ";
    cin>>s;
    vector<int>HT[s];
    cout<<"Enter the number of data :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cin>>x;
        r=x%10;
        HT[r].push_back(x);
    }
    for(int i=0 ; i<s ; i++){
        cout<<i<<" --> ";
        for(int j=0 ; j<HT[i].size() ; j++){
            cout<<HT[i][j]<<" ";
        }
        cout<<endl;
    }
}