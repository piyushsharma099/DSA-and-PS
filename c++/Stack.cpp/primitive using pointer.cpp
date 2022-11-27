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
    Initialize(&fs);
    push(&fs,1);
    push(&fs,2);
    push(&fs,3);
    push(&fs,4);
    cout<<Pop(&fs)<<endl;
    cout<<Pop(&fs)<<endl;
    cout<<stacktop(&fs)<<endl;
}