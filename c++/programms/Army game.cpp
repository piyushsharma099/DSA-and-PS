#include<bits/stdc++.h>
using namespace std;
int main(){   
    int n,m,f=0;
    cin>>n>>m;
    int x=(n/2)*(m/2);
    if((n%2==1)&&(m%2==1)){ 
       f=(((n-1)/2 +1)+(m/2));
     }else if(n%2 == 1){
        f= m/2;
    }else if(m%2 == 1){
        f= n/2;
    } 
   cout <<(x+f);
    return 0;
}