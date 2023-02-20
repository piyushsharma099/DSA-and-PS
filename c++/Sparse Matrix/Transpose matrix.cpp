#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter numbers of columns : ";
    cin>>c;
	int s_matrix[r][c];
    cout<<"Enter Matrix elements "<<endl;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin>>s_matrix[i][j];
        }
    }
    vector<pair<int,pair<int,int>>>v;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(s_matrix[i][j]!=0){
                v.push_back(make_pair(s_matrix[i][j],make_pair(i,j)));
            }
        }
    }
    cout<<"val "<<"row "<<"col"<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<" "<<v[i].first<<"   "<<v[i].second.first<<"   "<<v[i].second.second<<endl;
    }
    for(int i=0; i<v.size(); i++){
        swap(v[i].second.first,v[i].second.second);
    }
    cout<<endl<<"After Transpose "<<endl<<endl;
    cout<<"val "<<"row "<<"col"<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<" "<<v[i].first<<"   "<<v[i].second.first<<"   "<<v[i].second.second<<endl;
    }

}