#include<bits/stdc++.h>
using namespace std;
void largest_possible_Rectangle(int r){
    cout<<"Largest area :- ";
    cout<<(2*pow(r,2)); 
}
int main(){
    int r;
    cout<<"Enter the radius of circle :- ";
    cin>>r;
    largest_possible_Rectangle(r);
}
