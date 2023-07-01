/*FIND  the second largest element in arry*/
#include<stdio.h>
#include<limits.h>

 int main(){
     int arry[5];
     int secondmax=INT_MIN;
     int max=INT_MIN;
     printf("Enter value of array:");
    //  for(int i=0;i<5;i++){
    //     scanf("%d",&arry[i]);
    //  }
     
    //  for(int i=0;i<5;i++){
    //      if(max <arry[i]){
    //         max=arry[i];
    //      }
    //  }
    //  for(int i=0;i<5;i++){
    //      if(secondmax<arry[i] && arry[i]!=max){
    //         secondmax=arry[i];
    //      }
    //  }
    //  printf("%d",secondmax);
    //   Another approach-+
    for(int i=0;i<5;i++){
        scanf("%d",&arry[i]);
     }
     
     for(int i=0;i<5;i++){
         if(max <arry[i]){
            secondmax=max;
            max=arry[i];
         }
         else if(secondmax<arry[i]){
            secondmax=arry[i];
         }
     }
         printf("%d",secondmax);
     return 0;

 }  