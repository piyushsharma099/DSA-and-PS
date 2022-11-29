#include <bits/stdc++.h>
using namespace std;
void Prime_Factors(int n){
	int a=2;
	while(n>1){
		if(n%a==0){
		    cout<<a<<" ";
		    n=n/a;
		}
		else a++;
	}
}
int main(){
	int n;
    cout<<"Enter the number :- ";
    cin>>n;
	Prime_Factors(n);
}
