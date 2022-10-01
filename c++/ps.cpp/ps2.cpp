#include <bits/stdc++.h>
using namespace std;
int main() {
	int tcc,nnn;
    cin>>tcc;
	while(tcc--){
        cin>>nnn;
        vector<int>v;
	    for(int k=0;k<nnn;k++){
	        int xxx;
            cin>>xxx;
	        v.push_back(xxx);
	    }
	    int size = *max_element(v.begin(), v.end());
	    int len = size +1;
	    vector<int>a(len,0);
	    for(int k=0;k<nnn;k++){
	        a[v[k]]++;
	    }
	    int aannss = *max_element(a.begin(), a.end());
	    int f = nnn-aannss;
	    cout<<f<<"\n";
	}
	return 0;
}