#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
	int m=min(a,b);
	while (m>0) {
		if ((a%m==0)&&(b%m==0)){
			break;
		}
		m--;
	}
	return m; 
}
int main(){
	int a,b;
	cout<<"Enter the values of a and b :- ";
	cin>>a>>b;
	cout<<GCD(a,b);
}

