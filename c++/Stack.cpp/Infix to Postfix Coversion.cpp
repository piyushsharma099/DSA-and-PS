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
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
        return S.top;
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
int precedence(char a , char b){
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
void infix_to_postfix(char *infix){
    int i=0,j=0;
    char postfix[20],s,x;
    Initialize();
    while(infix[i]!='\0'){
        s=infix[i];
        i++;
        if((s>='a' && s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9')){
            postfix[j]=s;
            j++;
        }
        else{
            while(!IsEmpty() && precedence(stacktop(),s)){
                x=Pop();
                postfix[j]=x;
                j++;
            }
            push(s);
        }
    }
    while(!IsEmpty()){
        x=Pop();
        postfix[j]=x;
        j++;
    }
    postfix[j]='\0';
    cout<<"postfix :- "<<postfix;
}
int main(){
    char infix[]="a+b";
    infix_to_postfix(infix);
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
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
        return S.top;
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
int precedence(char a , char b){
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
void infix_to_postfix(char *infix){
    int i=0,j=0;
    char postfix[20],s,x;
    Initialize();
    while(infix[i]!='\0'){
        s=infix[i];
        i++;
        if((s>='a' && s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9')){
            postfix[j]=s;
            j++;
        }
        else{
            while(!IsEmpty() && precedence(stacktop(),s)){
                x=Pop();
                postfix[j]=x;
                j++;
            }
            push(s);
        }
    }
    while(!IsEmpty()){
        x=Pop();
        postfix[j]=x;
        j++;
    }
    postfix[j]='\0';
    cout<<"postfix :- "<<postfix;
}
int main(){
    char infix[]="a+b";
    infix_to_postfix(infix);
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}