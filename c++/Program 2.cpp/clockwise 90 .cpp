#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[20][20];
    cout<<"Enter the number rows and columns of matrix";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i=0; i<n; i++) {
        int l=0, h=n-1;
        while (l<h) {
            swap(arr[i][l], arr[i][h]);
            l++;
            h--;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}