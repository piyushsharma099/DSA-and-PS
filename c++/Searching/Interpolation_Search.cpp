#include<bits/stdc++.h>
using namespace std;
int Interpolation_Search( int a[] , int x , int n){
    int l = 0;
    int h = n - 1;
    int m;
    while (a[l] <= x && a[h] >= x){
        m = l + ((x - a[l]) * (h - l)) / (a[h] - a[l]);
        if (a[m] < x){
            l = m + 1;
        }
        else if (a[m] > x){
            l = m - 1;
        }
        else{
            return m;
        }
    }
 
    if (a[l] == x){
        return l;
    }
    else{
        return -1;
    }
}

int main() {
   int n, x, pos;
   cout << "Enter number of Elements:- ";
   cin >> n;
   int a[n]; 
   cout << "Enter Elements:- " ;
   for(int i = 0; i< n; i++) {
      cin >> a[i];
   }
   cout << "Enter the Element to be search: ";
   cin >> x;
   if((pos = Interpolation_Search(a, x , n)) != -1)
      cout << "Element founded !!! at :- " << pos+1;
   else
      cout << "No Element founded." ;
}