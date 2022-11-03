#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
char weekday[7] = {'Saturday','Sunday','Monday','Tuesday', 'Wednesday','Thursday','Friday'};
int zellersAlgorithm(int day, int month, int year){
   int mon;
   if(month > 2)
      mon = month;
   else{
      mon = (12+month); 
      year--; 
   }
   int y = year % 100; 
   int c = year / 100; 
   int w = (day + floor((13*(mon+1))/5) + y + floor(y/4) + floor(c/4) + (5*c));
   w = w % 7;
    // printf("%s",weekday[w]);
   return weekday[w];
}
int main(){
   int d, m, y;
   scanf("%d%d%d",&d,&m,&y);
   printf("%c",zellersAlgorithm(d, m, y));
}