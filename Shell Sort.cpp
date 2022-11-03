#include<bits/stdc++.h>
using namespace std;
void Shell_Sort(int a[] , int n){
    for (int g = n/2; g > 0; g /= 2){
        for (int i = g; i < n; i += 1){
            int temp = a[i];
            int j=i;            
            while(j >= g && a[j - g] > temp){
                a[j] = a[j - g];
                j -= g;
            }
            a[j] = temp;
        }
    }
    int k;
    for(int k=0 ; k<n ; k++){
        cout<<a[k]<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter the size of the of the array :- ";
    cin>>n;
    int a[n];
    cout<<"Enter the element of the array :- ";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    Shell_Sort(a,n);

}