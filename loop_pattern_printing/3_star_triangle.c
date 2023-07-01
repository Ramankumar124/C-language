#include<stdio.h>

   int main(){
  int n,i,j,k;
  printf("Enter a number");
  scanf("%d",&n);
  int nsp=0;
  int nst=n;
    for( i=1;i<=n;i++){
        for( j= 1;j<=nsp;j++){
            printf(" ");
        }
        for( k=1;k<=nst;k++){
            printf("*");
        }
        nsp++;
        nst=nst-1;
        printf("\n");
    }
    return 0;

    
   }