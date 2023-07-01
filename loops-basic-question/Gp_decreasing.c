//gp_100,50,25 upto n
#include<stdio.h>

   int main(){
     int n;
     printf("Enter a number :");
   scanf("%d",&n);
     float a=100.0;
      for(int i=1;i<=n;i++){
        printf("%.2f \n",a);/*In C language, "%.2f" is a format specifier used in printf() function to prin
                             t a floating-point number with 2 decimal places*/
        a=a/2;
      }                  // .4f for 4 decimal .6f for 6 decimal
      return 0;
   }