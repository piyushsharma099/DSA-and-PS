// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. 
// Find if the student is eligible for admission in Delhi University. 
// A student is eligible for DU if he has scored 95 % or more in Best 4.

#include<bits/stdc++.h>
using namespace std;
typedef struct students{
    char n[20];
    int rn;
    int a[10];  // marks
} st;
int main(){
    students st;
    int a[6]={0};
    int sum=0,n=6,max=0,i;
    float percent;
    cout<<"Enter your name :- ";
    cin>>st.n;
    cout<<"Enter your roll number :- ";
    cin>>st.rn;
    cout<<"Enter your marks in your 6 subjects :- ";
    for(int i=0 ; i<6 ; i++){
        cin>>st.a[i];
    }
    sort(a,a+6);
    for(int i=0 ; i<6 ; i++){
        cout<<st.a[i]<<" ";
    }
    for(int i=0 ; i<=3 ; i++){
        sum+=st.a[i];
    }
    percent=(sum/4);
    if(percent>95){
        cout<<"Qualified";
    }
    else{
        cout<<"Not Qualified";
    }
    
}