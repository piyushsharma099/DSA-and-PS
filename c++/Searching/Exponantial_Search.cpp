#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int a[], int s, int e, int x) {
   if(s <= e) {
      int m = (s + (e - s) /2); 
      if(a[m] == x)
         return m;
      if(a[m] > x)
         return Binary_Search(a, s, m-1, x);
         return Binary_Search(a, m+1, e, x);
   }
   return -1;
}

int Exponantial_Search(int a[], int s, int e, int x){
   if((e - s) <= 0)
      return -1;
      int i = 1; 
      while(i < (e - s)){
         if(a[i] < x)
            i *= 2; 
         else
            break; 
   }
   return Binary_Search(a, i/2, i, x); 
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
   if((pos = Exponantial_Search(a, 0, n, x)) >= 0)
      cout << "Element founded !!! at :- " << pos;
   else
      cout << "No Element founded." ;
}