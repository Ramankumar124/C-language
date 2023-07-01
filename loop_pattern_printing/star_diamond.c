#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number :");
    scanf("%d", &n);
         int nsp=n/2;
         int nst=1; 
        for(  i=1;i<=n;i++){
            for( int k=1;k<=nsp;k++ ){//space
               printf(" ");
            }
            for(int j =1;j<=nst;j++){//star
              printf("*");
            }
            if(i<n/2+1)
           { nsp--;
            nst+=2;
           }
           else{
            nsp++;
            nst-=2;
           }
            printf("\n");
        }
        return 0;
}