#include<bits/stdc++.h>
using namespace std;
int fact(int r){
    int f=1;
    for(int i=1 ; i<=r ; i++){
        f=f*i;
    }
    return f;
}
void Strong_No(int i){
    int r,s=0;
    int temp=i;
	while(i>0){
	    r=i%10;
        s=s+fact(r);
        i=i/10;
	}
    if(s==temp){
        cout<<temp<<" ";
    }
}
int main(){
	int n;
	cout<<"Enter the Number :- ";
	cin>>n;
    for(int i=1 ; i<n ; i++){
        Strong_No(i);
    }
}

