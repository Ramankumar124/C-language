/*Ques : Given an array of integers numbers that is
already sorted in non-decreasing order, find two
numbers such that they add up to a specific target
number.*/

// we  can use simple way to solve it but time complexity matters

#include<stdio.h>

 int main(){

   int arr[]={1,2,3,4,5,6,7,8,9,10};
  int i=0;
  int j=9;
   int target=6;
   while (i<j)
   {
     if(arr[i]+arr[j]==target){
        printf("the numbers are %d and %d " ,i+1,j+1);
       break;
     }
     else if( arr[i] + arr[j]>target){
        j--;  
     }
     else{ i++;}
   }
   
return 0;
 }