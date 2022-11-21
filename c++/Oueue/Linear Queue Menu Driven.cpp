#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
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
void taskDequeue(struct Queue*Q);
void taskEnqueue(struct Queue*Q){
    int n,t;
    cout<<"How many Enqueue ? "<<endl;
    cin>>n;
    cout<<"Enter Values"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>t;
        EnQueue(Q,t);
    }
    int x;
    cout<<"------------------------------"<<endl;
    cout<<"Enter your choice"<<endl;
    cout<<"Enter 1 to Enqueue"<<endl;
    cout<<"Enter 2 to Dequeue"<<endl;
    cout<<"Enter 3 to Exit"<<endl;
    cout<<"Choice :- ";
    cin>>x;
    if(x==1){
        taskEnqueue(Q);
    }
    else if(x==2){
        taskDequeue(Q);
    }
    else if(x==3){
        exit(1);
    }
    else{
        cout<<"Wrong choice";
    }
}
void taskDequeue(struct Queue*Q){
    int n;
    cout<<"How many Dequeue ? "<<endl;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cout<<DeQueue(Q)<<endl;
    }
    int x;
    cout<<"------------------------------"<<endl;
    cout<<"Enter your choice"<<endl;
    cout<<"Enter 1 to Enqueue"<<endl;
    cout<<"Enter 2 to Dequeue"<<endl;
    cout<<"Enter 3 to Exit"<<endl;
    cout<<"Choice :- ";
    cin>>x;
    if(x==1){
        taskEnqueue(Q);
    }
    else if(x==2){
        taskDequeue(Q);
    }
    else if(x==3){
        exit(1);
    }
    else{
        cout<<"Wrong choice";
    }
}
int main(){
    struct Queue q1;
    Initialize(&q1);
    int x;
    cout<<"------------------------------"<<endl;
    cout<<"Enter your choice"<<endl;
    cout<<"Enter 1 to Enqueue"<<endl;
    cout<<"Enter 2 to Dequeue"<<endl;
    cout<<"Enter 3 to Exit"<<endl;
    cout<<"Choice :- ";
    cin>>x;
    if(x==1){
        taskEnqueue(&q1);
    }
    else if(x==2){
        taskDequeue(&q1);
    }
    else{
        cout<<"Wrong choice";
        exit(1);
    }
    
}
