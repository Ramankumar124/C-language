//to print reverse of a given number
#include<stdio.h>

  int main(){
      int num,ld,reverse=0;
      printf("Enter a number ");
      scanf("%d",&num);
        while(num!=0){
            ld=num%10;
            reverse=reverse*10;
            reverse=reverse+ld;
            
            num=num/10 ;
        }
        printf("the reverse is :%d",reverse)
;  
  return 0;
  }