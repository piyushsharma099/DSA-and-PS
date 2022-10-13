#include<bits/stdc++.h>
using namespace std;
struct students{
    int day;
    int month;
    int year;
};
int main(){
    students st[10];
    cout<<"Enter the date 1"<<endl;
    cout<<"Enter day : ";
    cin>>st[0].day;
    cout<<"Enter Month : ";
    cin>>st[1].month;
    cout<<"Enter year : ";
    cin>>st[2].year;

    cout<<"Enter the date 2"<<endl;
    cout<<"Enter day : ";
    cin>>st[3].day;
    cout<<"Enter Month : ";
    cin>>st[4].month;
    cout<<"Enter year : ";
    cin>>st[5].year;
    if((st[0].day==st[3].day)&&(st[1].month==st[4].month)&&(st[2].year==st[5].year)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}