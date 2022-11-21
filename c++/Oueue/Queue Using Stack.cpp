#include<bits/stdc++.h>
using namespace std;
#define size 100
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
    if (S->top==(size-1)){
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
void Enqueue(struct Stack *S , int x){
    push(S,x);
}
int Dequeue(struct Stack *S){
    struct Stack ss;
    Initialize(&ss);
    int x=S->top;
    while(x--){
        int k=Pop(S);
        push(&ss,k);
    }
    int ans=Pop(S);
    while(!(IsEmpty(&ss))){
        int j=Pop(&ss);
        push(S,j);
    }
    return ans;
}
int main(){
    struct Stack fs;
    Initialize(&fs);
    Enqueue(&fs,10);
    Enqueue(&fs,20);
    Enqueue(&fs,22);
    Enqueue(&fs,1);
    Enqueue(&fs,5);
    Enqueue(&fs,15);
    cout<<Dequeue(&fs)<<endl;
    cout<<Dequeue(&fs)<<endl;
    cout<<Dequeue(&fs)<<endl;
    cout<<Dequeue(&fs)<<endl;
    cout<<Dequeue(&fs)<<endl;
    cout<<Dequeue(&fs)<<endl;
    cout<<Dequeue(&fs)<<endl; //underflows
    
}