#include<bits/stdc++.h>
using namespace std;
struct students{
    string na;
    int id;
    string au;
};
int main(){
    students st[100];
    int n;
    cout<<"How many Books :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of Books "<<i<<endl;
        cout<<"Book Name : ";
        cin>>st[i].na;
        cout<<"Book id : ";
        cin>>st[i].id;
        cout<<"Book Author : ";
        cin>>st[i].au;
    }
    for(int i=1 ; i<=n ; i++){
        cout<<"Details of student "<<i<<endl;
        cout<<"name : ";
        cout<<st[i].na<<endl;
        cout<<"Roll number : ";
        cout<<st[i].id<<endl;
        cout<<"marks : ";
        cout<<st[i].au<<endl;
    }
    cout<<" Choose From the Following options :- "<<endl;
    cout<<" 1 - Display book information"<<endl;
    cout<<" 2 - Add a new book"<<endl;
    cout<<" 3 - Display all the books in the library of a particular author"<<endl;
    cout<<" 4 - Display the number of books of a particular title"<<endl;
    cout<<" 5 - Display the total number of books in the library"<<endl;
    cout<<" 6 - Issue a book"<<endl;
    cout<<" 7 - EXIT"<<endl;
    
}