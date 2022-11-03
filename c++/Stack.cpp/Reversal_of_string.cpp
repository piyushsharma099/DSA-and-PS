#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    char item[10];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}
void push(char x){
    if (S.top==(10-1)){
        cout<<"Stack Overflow";
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
    }

}
int IsEmpty(){
    if (S.top==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
char Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        char x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
int stacktop(){
    char x= S.item[S.top];
    return x;
}
int main(){
    Initialize();
    string a;
    getline(cin,a);
    int i=0;
    while(a[i]!='\0'){
        push(a[i]);
        i++;
    }
    while(!IsEmpty()){
        char x=Pop();
        cout<<x;
    }
}