// to cheak given no is prime or composite or use of break statment
#include<stdio.h>

  int main(){
     int n;
   printf("Enter a number :");
   scanf("%d",&n);
      for( int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Its a composite number");
            break;
        }
        else{printf(" its a prime number");
      }
      }
      return 0;
  }