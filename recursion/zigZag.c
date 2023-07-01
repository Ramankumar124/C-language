#include<stdio.h>
    
     void preinpost(int n){
         if(n==0) return ;
         printf("%d ",n);
         preinpost(n-1);
         printf("%d ",n);
         preinpost(n-1);
         printf("%d ",n);
          return;
     }
 
   int main(){
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    preinpost(n);
   
    return 0;
   }