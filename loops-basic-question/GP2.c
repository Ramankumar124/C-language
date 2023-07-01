//print an gp 3,12,48...upto n
#include<stdio.h>
  
   int main(){
    int n,a=3,i;
    printf("Enter a number :");
    scanf("%d",&n);
     
       for ( i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;


       }
       return 0;
   }