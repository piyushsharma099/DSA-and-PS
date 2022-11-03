#include<bits/stdc++.h>
using namespace std;
# define size 10 
struct CQueue{
    int items[size];
    int Rear;
    int Front;
};
struct CQueue CQ;
void Initialize(){
    CQ.Front=0;
    CQ.Rear=0;
}
void EnQueue(int x){
    if((CQ.Rear+1)%size == CQ.Front){
        cout<<"Queue Overflows";
        exit(1);
    }
    CQ.Rear=(CQ.Rear+1) % size;
    CQ.items[CQ.Rear]=x;
}
int DeQueue(){
    int x;
    if(CQ.Rear=CQ.Front){
        cout<<"Queue Underflows";
        exit(1);
    }
    CQ.Front=(CQ.Front+1) % size;
    x=CQ.items[CQ.Front];
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
