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
int No_Of_Digits(int n){
	int c;
	while(n>0){
		n=n/10;
		c++;
	}
	return c;
}
int Division_Hash(int key , int ts){
	int np,l;
	np=Nearest_Prime(ts);
	l=key % np;
	return l;
}
int Midsquare(int key , int ts){
	int  a,b,c,x,l;
	a=No_Of_Digits(ts-1);
	b=No_Of_Digits(key);
	c=(2*b-a)/2;
	x=(key*key)/pow(10,c);
	l=x%int(pow(10,a));
	l=l%ts;
	return l;
}
int Folding_Hash(int key , int ts){
	int k=key,a,sum=0,b,l;
	a=No_Of_Digits(ts-1);
	while(k!=0){
		b=k%int(pow(10,a));
		sum=sum+b;
		k=k/(pow(10,a));
	}
	l=sum%int(pow(10,a));
	l=l%ts;
	return l;
}
int main(){
    int key,ts;
    ts=100;
    cout<<"Enter Element to be Searched :- ";
    cin>>key;
    cout<<"By Division Hash "<<Division_Hash(key,ts)<<endl;
    cout<<"By Midsquare Hash "<<Midsquare(key,ts)<<endl;
    cout<<"By Folding Hash "<<Folding_Hash(key,ts);
}