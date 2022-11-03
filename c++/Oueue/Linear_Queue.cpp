#include<bits/stdc++.h>
using namespace std;
# define size 10 
struct Queue{
    int items[size];
    int Rear;
    int Front;
};
struct Queue Q;
void Initialize(){
    Q.Front=0;
    Q.Rear=-1;
}
void EnQueue(int x){
    if(Q.Rear == size-1){
        cout<<"Queue Overflows";
        exit(1);
    }
    Q.Rear++;
    Q.items[Q.Rear]=x;
}
int DeQueue(){
    int x;
    if(Q.Rear-Q.Front+1==0){
        cout<<"Queue Underflows";
        exit(10);
    }
    x=Q.items[Q.Front];
    Q.Front++;
    return x;
}
int main(){
    Initialize();
    EnQueue(2);
    EnQueue(4);
    EnQueue(6);
    EnQueue(8);
    EnQueue(10);
    EnQueue(12);
    cout<<DeQueue();
}
