#include<bits/stdc++.h>
using namespace std;
int Insertion_Sort( int *a , int n ){
    for (int i = 1; i < n; i++) {
    int x = a[i];
    int j = i - 1;
    while (x < a[j] && j >= 0){
        a[j + 1] = a[j];
        --j;
    }
    a[j + 1] = x;
  }
}
int main(){
    int n,i,a[10];
    cout<<"Enter number of element :- ";
    cin>>n;
    cout<<"Enter the a element :- ";
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    Insertion_Sort( a , n );
}