<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}
void push(int x){
    if (S.top==(10-1)){
        cout<<"Stack Overflow";
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
    }

}
int IsEmpty(){
    if (S.top==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
int stacktop(){
    int x= S.item[S.top];
    return x;
}
int main(){
    int x,rem,a;
    char conversion[16]={'0','2','3','4','4','5','6','7','8','9','A','B','C','D','E','F'};
    cin>>x;
    Initialize();
    while(x!=0){
        rem=x%16;
        push(rem);
        x=x/16;
    }
    while(!IsEmpty()){
        a=Pop();
        cout<<conversion[a];
    }
=======
#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}
void push(int x){
    if (S.top==(10-1)){
        cout<<"Stack Overflow";
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
    }

}
int IsEmpty(){
    if (S.top==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}
int stacktop(){
    int x= S.item[S.top];
    return x;
}
int main(){
    int x,rem,a;
    char conversion[16]={'0','2','3','4','4','5','6','7','8','9','A','B','C','D','E','F'};
    cin>>x;
    Initialize();
    while(x!=0){
        rem=x%16;
        push(rem);
        x=x/16;
    }
    while(!IsEmpty()){
        a=Pop();
        cout<<conversion[a];
    }
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
}