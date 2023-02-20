#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    set<int>::iterator it;  // Declaring Iterator
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(10);
    s.insert(10);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.count(0);   // check if 0 is present in set or not
    cout<<endl;
    cout<<s.count(4);   // check if 1 is present in set or not
    cout<<endl;

    cout<<"Printing the set elements in range :- ";
    it=s.find(2);
    for(it ; it!=s.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Printing the set elements using iterator :- ";
    for(it=s.begin() ; it!=s.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    s.erase(s.begin());       // erasing Begining element from set
    s.erase(s.find(2));       // erasing any element from set (*NOTE = s.end() can't erase the element)
    for(it=s.begin() ; it!=s.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    set<int,greater<int>>ds;    // Descending Set
    ds.insert(2);
    ds.insert(3);
    ds.insert(0);
    ds.insert(3);
    ds.insert(1);
    ds.insert(0);
    for(auto i:ds){
        cout<<i<<" ";
    }


    
}