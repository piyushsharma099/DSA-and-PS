#include <bits/stdc++.h>
using namespace std;
int Nearest_Prime(int n){
	if (n & 1)
		n -= 2;
	else
		n--;
	int i, j;
	for (i = n; i >= 2; i -= 2) {
		if (i % 2 == 0)
			continue;
		for (j = 3; j <= sqrt(i); j += 2) {
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			return i;
	}
	return 2;
}
int Division_Hash(int key , int ts){
	int np,l;
	np=Nearest_Prime(ts);
	l=key % np;
	return l;
}
void hashing(int dat[], int ts, int a[], int n){
    for (int i = 0; i < n; i++) {
        int hv = Division_Hash(i,ts);
        if (dat[hv] == -1)
            dat[hv] = a[i];
        else{
            for (int j = 0; j < ts; j++) {
                int t = (hv + j) % ts;
                if (dat[t] == -1) {
                    dat[t] = a[i];
                    break;
                }
            }
        }
    }
   	for (int i = 0; i < n; i++) {
    	cout << a[i] << " ";
    }
}
int main(){
    int key,ts,x;
    cout<<"Enter Table Size :- ";
    cin>>ts;
    cout<<"Enter Number of Elements :- ";
    cin>>x;
    int a[ts];
    cout<<"Enter the elements :- ";
    for(int i=0 ; i<x ; i++){
        cin>>a[i];
    }
    int dat[ts]={0};
    hashing(dat,ts,a,x);
    
}