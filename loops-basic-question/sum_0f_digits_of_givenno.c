//to find the sum of digits of give no.
#include <stdio.h>

int main() {
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
      int  lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;
    } 
    printf("the sum of a number is %d",sum);
       
 return 0;}