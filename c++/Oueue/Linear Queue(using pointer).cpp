#include<bits/stdc++.h>
using namespace std;
# define TRUE 1
# define FALSE 0
# define size 10 
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
int main(){
    struct Queue q1;
    Initialize(&q1);
    EnQueue(&q1,2);
    EnQueue(&q1,4);
    EnQueue(&q1,6);
    EnQueue(&q1,8);
    EnQueue(&q1,10);
    EnQueue(&q1,12);
    cout<<DeQueue(&q1);
}
