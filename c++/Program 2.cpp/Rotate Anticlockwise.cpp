<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns :- ";
    cin>>n;
    int array[n][n];
    cout<<"Enter the matrix elements :- "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin>>array[i][j];
    }
    cout<<"output is "<<endl;
    for (int i = 0; i < n; i++) {
        int low = 0, high = n - 1;
        while (low < high) {
            swap(array[i][low], array[i][high]);
            low++;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(array[i][j], array[j][i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns :- ";
    cin>>n;
    int array[n][n];
    cout<<"Enter the matrix elements :- "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin>>array[i][j];
    }
    cout<<"output is "<<endl;
    for (int i = 0; i < n; i++) {
        int low = 0, high = n - 1;
        while (low < high) {
            swap(array[i][low], array[i][high]);
            low++;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(array[i][j], array[j][i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}