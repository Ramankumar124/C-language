#include<stdio.h>
#include<limits.h>

 int main(){
     int maxarry[5];
     printf("Enter value of array:");
     for(int i=0;i<5;i++){
        scanf("%d",&maxarry[i]);
     }
     int max=INT_MIN;
     int min=INT_MAX;
     for(int i=0;i<5;i++){
         if(max<maxarry[i]){
            max=maxarry[i];
         }
          if(min>maxarry[i]){
            min=maxarry[i];
         }
     }
     printf("%d",max);
     printf("%d",min);
     return 0;

 }  