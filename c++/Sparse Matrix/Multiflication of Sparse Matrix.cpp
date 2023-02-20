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
    int ans[r][c];
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
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            ans[i][j]=0;
            for(int k=0 ; k<r ; k++){
                ans[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(ans[i][j]!=0){
                v.push_back(make_pair(ans[i][j],make_pair(i,j)));
            }
        }
    }
    cout<<"After Multiplication ";
    cout<<"val "<<"row "<<"col"<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<" "<<v[i].first<<"   "<<v[i].second.first<<"   "<<v[i].second.second<<endl;
    }

}