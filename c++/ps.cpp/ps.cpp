#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int t_c;
	cin>>t_c;
	while(t_c--){
	    int mm,a,p;
	    cin>>mm>>a>>p;
	    vector<int>vec;
	    for(int i=0;i<mm;i++){
	        int x;
	        cin>>x;
	        vec.push_back(x);
	    }
	    int alice=0;
	    int bob=0;
	    for(int i=0;i<vec.size();i++){
	        if(vec[i]%a==0 && vec[i]!=0){
				bob++;
			} 
	        else if(vec[i]%p==0 && vec[i]!=0 ){
				alice++;
			}
	    }
	    if(bob>alice){
	        cout<<"BOB"<<endl;
	    }
	    else{
	        cout<<"ALICE"<<endl;
	    }
	    
	}
    return 0;
}