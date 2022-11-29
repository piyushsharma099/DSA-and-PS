#include <bits/stdc++.h>
using namespace std;
int Prime_Factors(int n){
	for(int i=2 ; i<n ; i++){
        if(n%i==0){
            return i;
            break;
        }
    }
}
int main(){
	int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<"1 ";
    for(int i=2 ; i<=n ; i++){
        cout<<Prime_Factors(i)<<" ";
    }
}
