// write a program to add two matrix
#include<stdio.h>
  
     int main(){
  


        int matrix1[3][3];
        printf("enter element of  first matrix");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("our first matric are");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",matrix1[i][j]);
            }
            printf("\n");
        }

        

        int matrix2[3][3];
        printf("enter element of  second matrix  \n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&matrix2[i][j]);
            }
        }
             printf("our second matric are \n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",matrix2[i][j]);
            }
            printf("\n");
        }
        printf(" sum of the matrix are :\n")
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",matrix2[i][j]+matrix1[i][j]);
            }
            printf("\n");
        }

        

        return 0;
     }
