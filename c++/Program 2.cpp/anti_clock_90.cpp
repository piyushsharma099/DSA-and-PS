<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[20][20];
    cout<<"Enter the number rows and columns of matrix :- ";
    cin>>n;
    cout<<"Enter the elements :- ";
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
    for (int j=0; j<n; j++) {
        int l=0, h=n-1;
        while (l>h) {
            swap(arr[j][h], arr[j][l]);
            l--;
            h++;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[20][20];
    cout<<"Enter the number rows and columns of matrix :- ";
    cin>>n;
    cout<<"Enter the elements :- ";
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
    for (int j=0; j<n; j++) {
        int l=0, h=n-1;
        while (l>h) {
            swap(arr[j][h], arr[j][l]);
            l--;
            h++;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}