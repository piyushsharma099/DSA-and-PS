#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of cities\n";
    cin>>n;
    char city[10][10];
    for (int i=0 ; i<n ; i++){
        cin>>city[i];
    }
    char t[20];
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if(strcmp(city[j],city[j+1])>0){
                strcpy(t,city[j]);
                strcpy(city[j],city[j+1]);
                strcpy(city[j+1],t);
            }
        }
    }
    for (int i=0; i<n; i++){
        cout<<city[i]<<"  ";
    }
}