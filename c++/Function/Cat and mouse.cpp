#include<bits/stdc++.h>  
using namespace std;
int cat(int x,int y,int z){
    if(abs(x-z)>abs(y-z)){
        cout<<"Cat A";
    }
    else if((abs(x-z)<abs(y-z))){
        cout<<"Cat B";
    }
    else{
        cout<<"Cat C";
    }
}
int main(){
    int q;
    while(q--){
        int x,y,z;
        cin>>x>>y>>z;
        cat(x,y,z);
    }
}