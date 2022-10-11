#include<bits/stdc++.h>
using namespace std;
struct comp{
    int r1;
    int i1;
    int r2;
    int i2;
};
int main(){
    struct comp c;
    cout<<"Let complex number be a+ib "<<endl;;
    cout<<"Enter a1 :- ";
    cin>>c.r1;
    cout<<"Enter b1 :- ";
    cin>>c.i1;
    cout<<"Enter a2 :- ";
    cin>>c.r2;
    cout<<"Enter b2 :- ";
    cin>>c.i2;
    cout<<"First complex number is :- "<<c.r1<<"+i"<<c.i1<<endl;
    cout<<"Second complex number is :- "<<c.r2<<"+i"<<c.i2<<endl;
    cout<<"Sum of complex number is :- "<<c.r2<<"+i"<<c.i2<<endl;
}