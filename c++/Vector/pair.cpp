#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>p1;
    p1.push_back(make_pair(1234,98));
    p1.push_back(make_pair(2345,96));
    p1.push_back(make_pair(3456,88));
    p1.push_back(make_pair(4567,91));
    //
    cout<<"Using vector.size()"<<endl;
    for(int i=0 ; i< p1.size() ; i++){
        cout<<p1[i].first<<","<<p1[i].second<<endl;
    }
    //
    cout<<"Using auto "<<endl;
    for(auto i:p1){
        cout<<i.first<<","<<i.second<<endl;
    }
}