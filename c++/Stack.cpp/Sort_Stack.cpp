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
    Initialize();
    push(10);
    push(20);
    push(5);
    push(15);
    int n=4,x,y;
    int min=INT_MAX;
    stack<int> temp;
    while(n){
        x=stacktop();
        Pop();
        y=stacktop();
        Pop();
        if(!IsEmpty() && !temp.empty()){
            if(x>y){
                temp.push(x);
                x=0;
            }
            else{
                temp.push(y);
                y=0;
            }
        }
        cout<<x<<endl;
        cout<<y<<endl;
        temp.top();
    //     if(stacktop()>temp.top()){
    //         int k=stacktop();
    //         Pop();
    //         push(temp.top());
    //         temp.pop();
    //         temp.push(stacktop());
    //     }
    //     else{
    //         if(x==0){
    //             x=stacktop();
    //         }
    //         else{
    //             y=stacktop();
    //         }
    //     }
        n--;
    }
    // while(n){
    //     temp.pop();
    //     n--;
    // }
}