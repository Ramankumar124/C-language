// given marks of 10 students if marks is less then 35 print index no.
#include<stdio.h>

   int main(){
    int marks[10]={12,35,56,78,100,56,23,12,12,34};
    for(int i=0;i<10;i++){
    if(marks[i]<=35){
    printf("%d  ",i);
    }
   }
   return 0;
   }