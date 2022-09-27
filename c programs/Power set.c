#include <stdio.h>
#include <math.h>
void printPowerSet(char *set, int n){
    unsigned int pow_set_size = pow(2, n);
    int counter, j;
    for(counter = 0; counter < pow_set_size; counter++){
        printf("{");
      for(j = 0; j < n; j++){
            if(counter & (1<<j))
            printf("%c", set[j]);
       }
       printf("}\n");
    }
}
int main(){
    char set[] = {'a','b','c'};
    printPowerSet(set, 3);
    return 0;
}