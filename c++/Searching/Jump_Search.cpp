#include<bits/stdc++.h>
using namespace std;
int jumpSearch(int a[], int n, int x) {
   int s = 0;
   int e = sqrt(n); 

   while(a[e] <= x && e < n) {
      s = e; 
      e += sqrt(n);
      if(e > n-1)
         e = n; 
   }

   for(int i = s; i<e; i++) { 
      if(a[i] == x)
         return i; 
   }
   return -1;
}

int main() {
   int n, x, pos;
   cout << "Enter number of elements :- ";
   cin >> n;
   int a[n];
   cout << "Enter the elements of array:- " << endl;

   for(int i = 0; i< n; i++) {
      cin >> a[i];
   }

   cout << "Enter the element to be search :- ";
   cin >> x;
   if((pos = jumpSearch(a, n, x)) >= 0)
      cout << "Element is founded at :- " << pos << endl;
   else
      cout << "Element is not in the array :- " << endl;
}