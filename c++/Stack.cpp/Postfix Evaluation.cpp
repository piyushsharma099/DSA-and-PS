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
int evaluate(int a,int b,char s){
    switch(s){
        case '+' : return a+b;
        case '-' : return a-b;
        case '*' : return a*b;
        case '/' : return a/b;
        case '%' : return a%b;
    }
    return 0;
}
void p_f_e(char *e){
    int i=0;
    int a,b,x;
    char s;
    Initialize();
    while(e[i]!='\0'){
        s=e[i];
        i++;
        if(s>='0' && s<='9'){
            push(s-'0');
        }
        else{
            b=Pop();
            a=Pop();
            x=evaluate(a,b,s);
            push(x);
        }
    }
    cout<<Pop();
}
int main(){
    char e[]="23+6-2*3";
    p_f_e(e);
}