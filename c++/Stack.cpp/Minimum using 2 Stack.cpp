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
    struct Stack ss;
    int k;
    int min=INT_MAX;
    Initialize(&fs);
    Initialize(&ss);
    push(&fs,100);
    push(&fs,40);
    push(&fs,30);
    push(&fs,120);
    while(!IsEmpty(&fs)){
        k=stacktop(&fs);
        if(k<min){
            min=k;
        }
        else{
            Pop(&fs);
            push(&ss,k);
        }
    }
    while(!IsEmpty(&ss)){
        Pop(&ss);
        push(&fs,k);
    }
    cout<<min;
}