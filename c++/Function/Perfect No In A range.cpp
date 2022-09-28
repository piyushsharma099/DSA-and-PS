#include<bits/stdc++.h>
using namespace std;
void Perfect_No(int n){
    int r,s=0;
	for(int i=1 ; i<n ; i++){
        r=n%i;
        if(r==0){
            s=s+i;
        }
    }
    if(s==n){
        cout<<s<<" ";
    }
}
int main(){
	int n;
	cout<<"Enter the Number :- ";
	cin>>n;
    for(int i=1 ; i<n ; i++){
        Perfect_No(i);
    }
}

