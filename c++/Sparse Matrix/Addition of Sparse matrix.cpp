#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter numbers of columns : ";
    cin>>c;
	int mat1[r][c];
    int mat2[r][c];
    cout<<"Enter Matrix 1 elements "<<endl;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin>>mat1[i][j];
        }
    }
    cout<<"Enter Matrix 2 elements "<<endl;
    for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin>>mat2[i][j];
        }
    }
    vector<pair<int,pair<int,int>>>v;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(mat1[i][j]!=0){
                v.push_back(make_pair(mat1[i][j],make_pair(i,j)));
            }
        }
    }
    vector<pair<int,pair<int,int>>>v2;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(mat1[i][j]!=0){
                v2.push_back(make_pair(mat1[i][j],make_pair(i,j)));
            }
        }
    }
    cout<<"val "<<"row "<<"col"<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<" "<<v[i].first<<"   "<<v[i].second.first<<"   "<<v[i].second.second<<endl;
    }
    cout<<"val "<<"row "<<"col"<<endl;
    for(int i=0; i<v2.size(); i++) {
        cout<<" "<<v2[i].first<<"   "<<v2[i].second.first<<"   "<<v2[i].second.second<<endl;
    }
    vector<pair<int,pair<int,int>>>ans;
    for(int i=0; i<v.size(); i++) {
        if(v[i].second.first==v2[i].second.first && v[i].second.second==v2[i].second.second){
            ans[i].first=v[i].first+v2[i].first;
            ans[i].second.first=v[i].second.first;
            ans[i].second.second=v[i].second.second;
        }
        else{
            ans[i].first=v[i].first;
            ans[i].second.first=v[i].second.first;
            ans[i].second.second=v[i].second.second;

            ans[i].first=v2[i].first;
            ans[i].second.first=v2[i].second.first;
            ans[i].second.second=v2[i].second.second;
        }
    }
    cout<<"val "<<"row "<<"col"<<endl;
    for(int i=0; i<ans.size(); i++) {
        cout<<" "<<ans[i].first<<"   "<<ans[i].second.first<<"   "<<ans[i].second.second<<endl;
    }
}