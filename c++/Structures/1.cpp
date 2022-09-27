// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. 
// Find if the student is eligible for admission in Delhi University. 
// A student is eligible for DU if he has scored 95 % or more in Best 4.

#include<bits/stdc++.h>
using namespace std;
int countingsort(int a[] , int n , int max ){
    int i , j , ans[20] ;
    int c[max+1]={0};
    for(i=0 ; i<n ; i++){
        c[a[i]]++;
    }
    for(i=1 ; i<max+1 ; i++){
        c[i]=c[i]+c[i-1];
    }
    for(j=n-1 ; j>=0 ; j--){
        ans[c[a[j]]-1]=a[j];
        c[a[j]]--;
    }
    for (i=0 ; i<n ; i++){
        return ans[i];
    }
}
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
    for(i=0 ; i<n ; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    countingsort(a,n,max);
    for(int i=6 ; i>2 ; i--){
        sum+=a[i];
    }
    percent=(sum/4);
    if(percent>95){
        cout<<"Qualified";
    }
    else{
        cout<<"Not Qualified";
    }
    
}