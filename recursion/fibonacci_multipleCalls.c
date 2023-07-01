#include<stdio.h>
 
 int fibo(int n ){
    if(n==1||n==2) return 1;
    
    int ans=fibo(n-1)+fibo(n-2);
    return ans;
 }

   int main(){
    
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
   }