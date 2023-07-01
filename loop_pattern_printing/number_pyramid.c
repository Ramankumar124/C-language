#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of rhombus: ");
    scanf("%d", &n);
int nst=1;//no of stars
int nsp=3;//no of spaces
    for (i = 0; i < n; i++) {
       int a=1;
        for(int k=0;k<=nsp;k++){
            printf(" ");
        }
        nsp=nsp-1;
        for (j = 0; j <nst; j++) {
            printf("%d",a);
              a++;
        }
      
        nst=nst+2;
         printf("\n");
    
    }
      

       

    return 0;
}


