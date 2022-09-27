#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0 || b == 0)
        return (a + b);
    else
        return gcd(min(a, b), max(a, b)%min(a, b));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,y,c=0;
        cin>>x1>>y1>>x2>>y2;
        cout<<(gcd(abs(x2 - x1),abs(y2 - y1)) - 1);
    }
}