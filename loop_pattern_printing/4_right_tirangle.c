// 4 quad right triangle
 
  #include<stdio.h>

     int main(){
        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        for(int i = 0;i<=n;i++){
            for(int j=0;j<n-i;j++){
                printf(" * "); 
            }
            printf("\n");
        }
        return 0;
     }
     /* int a =n
     for(int i = 0;i<=n;i++){
            for(int j=0;j<=a;j++){
                printf(" * "); 
            }
            a--;
            printf("\n");
        }*/