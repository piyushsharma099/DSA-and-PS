#include<bits/stdc++.h>
using namespace std;
int main(){
    char *p;
    p=(char*)malloc(4);
    *p='A';
    *(p+1)='B';
    *(p+2)='C';
    *(p+3)='D';
    for(int i=0 ; i<4 ; i++){
        cout<<*(p+i);
    }
}