#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10][10][10]; 
    cout<<&a[5][5][5]<<endl;
    //cout<<(&a[1][1][1]+1*((10)*(10)*(4)+(10)*(4)+(4)));
    cout<<(&a[0][0][0]+1*((10)*(10)*(5)+(10)*(5)+(5)));
    
}
