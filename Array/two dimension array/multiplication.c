// write a program to multiplication of two matrix
#include<stdio.h>
  
     int main(){
  


        int matrix1[3][2];
        int result[2][4];
        int cr=2;
        int i,j;
        //pahle wale ka col or dusre wale ka row
        printf("enter element of  first matrix");
        for( i=0;i<3;i++){
            for( j=0;j<2;j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("our first matric are");
        for( i=0;i<3;i++){
            for( j=0;j<2;j++){
                printf("%d ",matrix1[i][j]);
            }
            printf("\n");
        }

        

        int matrix2[2][4];
        printf("enter element of  second matrix  \n");
        for( i=0;i<2;i++){
            for(j=0;j<4;j++){
                scanf("%d",&matrix2[i][j]);
            }
        }
             printf("our second matric are \n");
        for( i=0;i<2;i++){
            for( j=0;j<4;j++){
                printf("%d ",matrix2[i][j]);
            }
            printf("\n");
        }
        
         for( i=0;i<3;i++){
            for( j=0;j<4;j++){
               // i row of a[][] and j colum 0f j[][]
                 // (a[i][o],a[i][1],a[i][2]...)*(b[0][j],b[1][j],b[2][j]..)
           result[i][j]=0;
           for(int k=0;k<cr;k++){
           
            result[i][j]+= matrix1[i][k]*matrix2[k][j];
           }
            }
         }
             printf("our our matric is \n");
        for( i=0;i<3;i++){
            for( j=0;j<4;j++){
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
         
       return 0;
     }