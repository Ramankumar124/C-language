//to find the sum of series 1-2+3-4+5-6...upto n
#include <stdio.h>

int main() {
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
   for(int i=1;i<=num;i++){
    if(i%2!=0){sum=sum+i;}
    else{sum=sum-i;}
   }
   printf("the sum is %d",sum);
   return 0;
}