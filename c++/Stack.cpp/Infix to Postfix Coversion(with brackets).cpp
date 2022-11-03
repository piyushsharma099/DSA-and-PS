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
int precedence(char a1 , char a2){
    if(a1=='('){
        return FALSE;
    }
    else{
        if(a2=='('){
            return FALSE;
        }
        else{
            if(a2==')'){
                return TRUE;
            }
            else{
                if((a1=='^') || (a1=='*') || (a1=='/') || (a1=='%')){
        if(a2=='^'){
            return FALSE;
        }
        else{
            return TRUE;
        }
    }
    else{
        if((a1=='+') || (a1=='-')){
            if((a2=='+') || (a2=='-')){
                return TRUE;
            }
            else{
                return FALSE;
            }
        }
    }
}
            }
        }
    }
void infix_to_postfix(char *infix){
    int i=0,j=0;
    char postfix[20],s,x;
    Initialize();
    while(infix[i]!='\0'){
        s=infix[i++];
        if((s>='a' && s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9')){
            postfix[j]==s;
            j++;
        }
        else{
            while(!IsEmpty() && precedence(stacktop(),s)){
                x=Pop();
                postfix[j]=x;
                j++;
            }
            if(s==')'){
                Pop();
            }
            else{
                push(s);
            }
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
    char infix[]="a+(b-c)";
    infix_to_postfix(infix);
}