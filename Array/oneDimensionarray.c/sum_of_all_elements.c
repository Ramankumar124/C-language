/* to print the sum of 
all element of array*/
#include<stdio.h>

 int main(){

     int arr[5]={1,5,3,5,4,};
     int sum=0;
     for( int i=0;i<=5;i++){
         sum =sum+arr[i];

     }
     printf("%d",sum);
     return 0;
 }