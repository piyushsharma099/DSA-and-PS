#include<bits/stdc++.h>
using namespace std;
# define size 10 
# define TRUE 1
# define FALSE 0
struct CQueue{
    int items[size];
    int Rear;
    int Front;
};
void Initialize(struct CQueue *CQ){
    CQ->Front=size-1;
    CQ->Rear=size-1;
}
bool Isempty(struct CQueue *CQ){
    if(CQ->Rear==CQ->Front){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
void EnQueue(struct CQueue *CQ,int x){
    if((CQ->Rear+1)%size == CQ->Front){
        cout<<"Queue Overflows";
        exit(1);
    }
    CQ->Rear=(CQ->Rear+1) % size;
    CQ->items[CQ->Rear]=x;
}
int DeQueue(struct CQueue *CQ){
    int x;
    if(CQ->Rear==CQ->Front){
        cout<<"Queue Underflows";
        exit(1);
    }
    CQ->Front=(CQ->Front+1) % size;
    x=CQ->items[CQ->Front];
    return x;
}
int main(){
    struct CQueue cq1;
    Initialize(&cq1);
    EnQueue(&cq1,2);
    EnQueue(&cq1,4);
    EnQueue(&cq1,6);
    EnQueue(&cq1,8);
    EnQueue(&cq1,10);
    EnQueue(&cq1,12);
    cout<<DeQueue(&cq1);
}
