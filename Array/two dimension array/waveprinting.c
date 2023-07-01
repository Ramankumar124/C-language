#include<stdio.h>
   int main(){
    int n,m;
    printf("Enter row number :");
    scanf("%d",&n);
    printf("Enter col number :");
    scanf("%d",&m);
        int matrix1[n][m];
        int i,j;
        //pahle wale ka col or dusre wale ka row
        printf("enter element of matrix\n");
        for( i=0;i<n;i++){
            for( j=0;j<m;j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("our  matric before wave printing\n");
        for( i=0;i<n;i++){
            for( j=0;j<m;j++){
                printf("%d ",matrix1[i][j]);
            }
            printf("\n");
        }
        printf("our  matric after  wave printing\n");
        for( i=0;i<n;i++){
            if(i%2==0)
        {   
             for( j=0;j<m;j++){
                printf("%d ",matrix1[i][j]);
                              }
            }
            else
                {   
             for( j=n-1;j>=0;j--){
                printf("%d ",matrix1[i][j]);
                              }
            }
            
            printf("\n");
        }

return 0;
   }