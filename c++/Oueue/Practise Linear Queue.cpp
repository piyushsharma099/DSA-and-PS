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
struct Queue Q;
void Initialize(){
    Q.Front=0;
    Q.Rear=-1;
}
bool Isempty(){
    if(Q.Rear-Q.Front+1==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
void Enqueue(int x){
    if(Q.Rear==size-1){
        cout<<"Queue Overflow";
        exit(1);
    }
    Q.Rear=Q.Rear+1;
    Q.items[Q.Rear]=x;
}
int Dequeue(){
    if(Isempty()){
        cout<<"Queue underflow";
        exit(1);
    }
    int x=Q.items[Q.Front];
    Q.Front++;
    return x;
}
int main(){
    Initialize();
    Enqueue(12);
    Enqueue(1);
    Enqueue(13);
    Enqueue(2);
    Enqueue(14);
    cout<<Dequeue();
}