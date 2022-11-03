#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    int a[20]; 
    for(int i=0; i<n; i++) 
    cin>>a[i];
    cout<<*min_element(a,a+n)<<endl;
    //cout<<*max_element(a,a+n)<<endl;
	return 0;
}