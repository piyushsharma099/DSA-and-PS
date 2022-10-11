#include<stdio.h>
void Not_Gate(int a , int b){
    printf("not a :- %d \n",(!a));
    printf("not b :- %d \n",(!b));
}
void Or_Gate(int a , int b){
    printf("or :- %d \n",(a||b));
}
void And_Gate(int a , int b){
    printf("and :- %d \n",(a&&b));
}
int main(){
    int a,b;
    printf("Enter the value of a :- ");
    scanf("%d",&a);
    printf("Enter the value of b :- ");
    scanf("%d",&b);
    And_Gate(a,b);
    Or_Gate(a,b);
    Not_Gate(a,b);
    
}