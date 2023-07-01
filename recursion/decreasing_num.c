#include<stdio.h>
  
  void decreasing(int n){
     
     if(n==0) return;
      printf("%d\t",n);

       decreasing(n-1);
       return;
      
    }

   int main(){
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    decreasing(n);
    return 0;
   }