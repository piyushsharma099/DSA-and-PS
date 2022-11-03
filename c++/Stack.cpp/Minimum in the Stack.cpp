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
    Initialize();
    int x,min;
    push(100);
    push(200);
    push(50);
    push(300);
    push(1000);
    while(!IsEmpty()){
        x=stacktop();
        if(x<min){
            min=x;
        }
        else{
            Pop(x);
        }
    }

}