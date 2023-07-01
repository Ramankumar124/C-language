#include<stdio.h>
  void swap(int* x,int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return;
  }
  int main(){
     int n,m ;
     printf("Enter  first number :");
     scanf("%d",&n);
       printf("Enter  second number :");
     scanf("%d",&m);

     printf(" \n first number before swaping : %d",n);
      printf(" \nsecond  number before swaping : %d",m);
      swap(&n,&m);
      printf("\n first number after swaping : %d",n);
      printf("\n second  number after  swaping : %d",m);
    return 0;
  }