<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}
void push(int x){
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
int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
int stacktop(){
    int x= S.item[S.top];
    return x;
}
int main(){
    char e[]="[[]]";
    int i=0,f=1;
    char x;
    Initialize();
    while(e[i]!='\0'){
        x=e[i];
        if(x=='['){
            push(x);
        }
        else{
            if(IsEmpty()){
                f=0;
                break;
            }
            else{
                Pop();
            }
        }
        i++;
    }
    if(IsEmpty()){
        if(f==0){
            cout<<"Incorrect";
        }
        else{
            cout<<"correct";
        }
    }
    else{
        cout<<"Incorrect";
    }
=======
#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}
void push(int x){
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
int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
int stacktop(){
    int x= S.item[S.top];
    return x;
}
int main(){
    char e[]="[[]]";
    int i=0,f=1;
    char x;
    Initialize();
    while(e[i]!='\0'){
        x=e[i];
        if(x=='['){
            push(x);
        }
        else{
            if(IsEmpty()){
                f=0;
                break;
            }
            else{
                Pop();
            }
        }
        i++;
    }
    if(IsEmpty()){
        if(f==0){
            cout<<"Incorrect";
        }
        else{
            cout<<"correct";
        }
    }
    else{
        cout<<"Incorrect";
    }
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}