#include<stdio.h>
  
  void increasing(int n){
     
     if(n==0) return;//base case
   
         printf("%d ",n);// call
    
       increasing(n-1);
          printf("%d ",n);// call
    
       return;
      
    }

   int main(){
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
   increasing(n);
    return 0;
   }