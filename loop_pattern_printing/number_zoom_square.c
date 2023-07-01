#include<stdio.h>
 
   int main(){

    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int min=0;
      
       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=i;
            if(i>n){
                a=2*n-i;
            }
            int b=j;
            if(b>n) b=2*n-j;
            if(a<b) min =a;
            else{ min=b;}
            printf("%d",n+1-min);

        }
        printf("\n");

       }
    return 0;
    }


