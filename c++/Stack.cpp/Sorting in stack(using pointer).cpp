#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};

void Initialize(struct Stack *S){
    S->top=-1;
}
void push(struct Stack *S,int x){
    if (S->top==(10-1)){
        cout<<"Stack Overflow";
        exit(1);
    }
    else{
        S->top=S->top+1;
        S->item[S->top]=x;
    }

}
int IsEmpty(struct Stack *S){
    if (S->top==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int Pop(struct Stack *S){
    if(IsEmpty(S)){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S->item[S->top];
        S->top=S->top-1;
        return x;
    }
}
int stacktop(struct Stack *S){
    int x= S->item[S->top];
    return x;
}
int main(){
    struct Stack fs;
    struct Stack Ss;
    Initialize(&fs);
    Initialize(&Ss);
    push(&fs,11);
    push(&fs,20);
    push(&fs,5);
    push(&fs,55);
    push(&fs,40);
    push(&fs,1);
    while(!IsEmpty(&fs)){
        int x=stacktop(&fs);
        Pop(&fs);
        while(!IsEmpty(&Ss) && stacktop(&Ss)<x){
            push(&fs,stacktop(&Ss));
            Pop(&Ss);
        }
        push(&Ss,x);
    }
    while(!IsEmpty(&Ss)){
        cout<<stacktop(&Ss)<<" ";
         Pop(&Ss);
    }
}
 