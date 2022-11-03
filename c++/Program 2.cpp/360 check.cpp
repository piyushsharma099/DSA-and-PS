<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    int arr[20][20];
    int arr2[20][20];
    cout<<"Enter the number rows and columns of matrix :- ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int k=0 ; k<4 ; k++){
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
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            arr2[i][j]=arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr2[i][j]==arr[i][j]){
                c++;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<c;
    if(pow(c,0.5)==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    int arr[20][20];
    int arr2[20][20];
    cout<<"Enter the number rows and columns of matrix :- ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    for(int k=0 ; k<4 ; k++){
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
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            arr2[i][j]=arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr2[i][j]==arr[i][j]){
                c++;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<c;
    if(pow(c,0.5)==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}