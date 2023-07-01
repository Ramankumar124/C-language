#include<stdio.h>

   int main(){

    int x=80;
    printf("%p\n",&x);
     int*y=&x;
     printf("%p\n",&y);
     int**z=&y;
    printf("%p\n",&z);
    printf("%d",**z);
    return 0;
   }