/* If an array arr contains n elements, then
check if the given array is a palindrome or not.
*/

#include<stdio.h>



 int main(){
    int arr[6]={1,2,3,3,2,1};
  int i=0;
  int j=5;
   for(i,j;i<j;i++,j--){
    if(arr[i]!=arr[j]){
      printf("its not a palidrome");
        break;
       
   }
    else {
  printf("Palindrome");
    }}
 return 0;
 }