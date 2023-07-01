#include<stdio.h>// only 1 step and 2 step
  
 int stair(int n){
    if(n==1 ||n==2) return n;
    

   int totalWays=stair(n-1)+stair(n-2);
   return totalWays; 
 }

   int main(){
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int ways=stair(n);
   printf("%d",ways);
    return 0;
   }