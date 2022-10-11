#include<bits/stdc++.h>
using namespace std;
struct Height{
    int fe;
    int in;
};
int main(){
    struct Height h1={13,11};
    struct Height h2={7,8};
    struct Height h;
    h.in=(h1.in+h2.in)%12;
    int x=(h1.in+h2.in)/12;
    h.fe=(h1.fe+h2.fe+x);
    cout<<"The Resultant Height is :- ";
    cout<<h.fe<<" "<<h.in;
}
/*
void AddTime(struct Time T1, struct Time T2)
{
    struct Time T3;
    T3.second=(T1.second+T2.second)%60;
    T3.minute=(T1.minute+T2.minute)%60+(T1.second+T2.second)/60;
    T3.hour=T1.hour+T2.hour+(T1.minute+T2.minute)/60;
    printf("%d::%d::%d",T3.hour,T3.minute,T3.second);
}
*/