<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns :- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the matrix elements :- "<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<"output is "<<endl;
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            swap(arr[i][j], arr[j][i]);
    for (int i=0; i<n; i++) {
        int l=0, h=n-1;
        while (l<h) {
            swap(arr[i][l], arr[i][h]);
            l++;
            h--;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout<<arr[i][j]<< " ";
        cout<<endl;
    }
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns :- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the matrix elements :- "<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<"output is "<<endl;
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            swap(arr[i][j], arr[j][i]);
    for (int i=0; i<n; i++) {
        int l=0, h=n-1;
        while (l<h) {
            swap(arr[i][l], arr[i][h]);
            l++;
            h--;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout<<arr[i][j]<< " ";
        cout<<endl;
    }
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}