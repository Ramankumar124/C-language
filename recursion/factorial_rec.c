#include<stdio.h>
  
   int factorial(int y){
     if(y==1|| y==0)  return 1;// base case
     int recarscon=y*factorial(y-1);

     return recarscon;
   }

   int main(){
     
      int n;
      printf(" enter a number");
      scanf("%d",&n);
      int fact=factorial(n);
      printf("%d",fact);
      return 0;

   }