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
    vector<int>v;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j <= i; ++j) {
            v.push_back(s_matrix[i][j]);
        }
    }
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}