#include <bits/stdc++.h>
using namespace std;
int Palindrome_no(int n, int temp){
	if(n==0)
		return temp;
    else{
        temp=(temp*10)+(n%10);
        return Palindrome_no(n/10,temp);
    }
}
int main(){
	int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
	int temp = Palindrome_no(n, 0);
	if (temp==n)
		cout<<n<<" is a palindrome number "<< endl;
	else
		cout<<n<<" is not a Palindrome number "<< endl;
}
