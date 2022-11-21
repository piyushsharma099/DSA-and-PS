#include<bits/stdc++.h>
using namespace std;
# define TRUE 1
# define FALSE 0
# define size 100 
struct Queue{
    int items[size];
    int Rear;
    int Front;
};
void Initialize(struct Queue*Q){
    Q->Front=0;
    Q->Rear=-1;
}
bool Isempty(struct Queue*Q){
    if(Q->Rear-Q->Front+1==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
void EnQueue(struct Queue*Q,int x){
    if(Q->Rear == size-1){
        cout<<"Queue Overflows";
        exit(1);
    }
    Q->Rear++;
    Q->items[Q->Rear]=x;
}
int DeQueue(struct Queue*Q){
    int x;
    if(Isempty(Q)){
        cout<<"Queue Underflows";
        exit(1);
    }
    x=Q->items[Q->Front];
    Q->Front++;
    return x;
}
void push(struct Queue *Q , int x){
    EnQueue(Q,x);
}
int pop(struct Queue *Q){
    int i=Q->Rear-Q->Front;
    // cout<<i<<endl;
    while(i--){
        int x=DeQueue(Q);
        // cout<<x<<endl;
        EnQueue(Q,x);
    }
    int k=DeQueue(Q);
    return k;
}
int main(){
    struct Queue q1;
    Initialize(&q1);
    push(&q1,15);
    push(&q1,20);
    push(&q1,30);
    push(&q1,10);
    push(&q1,25);
    cout<<pop(&q1)<<endl;
    cout<<pop(&q1)<<endl;
    cout<<pop(&q1)<<endl;
    cout<<pop(&q1)<<endl;
    cout<<pop(&q1)<<endl;
    cout<<pop(&q1)<<endl; //Underflows

}
