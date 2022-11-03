<<<<<<< HEAD
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
int push(char x){
    if (S.top==(10-1)){
        cout<<"Stack Overflow";
        return -1;
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
        return 1;
    }

}
int IsEmpty(){
    return S.top==-1;
}
int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        return -1;
    }
    else{
        char x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
char stacktop(){
    char x= S.item[S.top];
    return x;
}
bool prcd( char a, char b){
    if(a=='^' || a=='*' || a=='/' || a=='%'){
        if(b=='^'){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if(a=='+' || a=='-'){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
}
int main(){
    char a,b;
    cin>>a>>b;
    cout<<prcd(a,b);
=======
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
int push(char x){
    if (S.top==(10-1)){
        cout<<"Stack Overflow";
        return -1;
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
        return 1;
    }

}
int IsEmpty(){
    return S.top==-1;
}
int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        return -1;
    }
    else{
        char x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
char stacktop(){
    char x= S.item[S.top];
    return x;
}
bool prcd( char a, char b){
    if(a=='^' || a=='*' || a=='/' || a=='%'){
        if(b=='^'){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if(a=='+' || a=='-'){
            return TRUE;
        }
        else{
            return FALSE;
        }
    }
}
int main(){
    char a,b;
    cin>>a>>b;
    cout<<prcd(a,b);
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}