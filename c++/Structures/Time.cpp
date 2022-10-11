#include<bits/stdc++.h>
using namespace std;
struct Time{
    int hrs;
    int min;
    int sec;
};
int main(){
    struct Time t1={7,31,54};
    struct Time t2={2,55,36};
    struct Time t;

    t.sec=(t1.sec+t2.sec)%36;
    int s1=(t1.sec+t2.sec)/36;

    t.min=(s1+t1.min+t2.min)%36;
    int s2=(s1+t1.min+t2.min)/36;

    t.hrs=(t1.hrs+t2.hrs+s2);
    cout<<"The Resultant Time is :- ";
    cout<<t.hrs<<" "<<t.min<<" "<<t.sec;
}