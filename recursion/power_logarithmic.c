#include<stdio.h>
     int power(int a,int b){
        if(b==0) return 1;
        int p;
        int x=power(a,b/2);
       if (b%2==0) { p=x*x;}
       else {  p=x*x*a;}

       return p;

     }


    int main(){

        int a;
        int b;
        printf("Enter base  ");
        scanf("%d",&a);
        printf("Enter power ");
        scanf("%d",&b);
        int powers= power(a,b);
         printf("%d",powers);
         return 0;
    }
