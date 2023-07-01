// to find the transpose of matrix
#include<stdio.h>
  
     int main(){
  


        int matrix1[3][2];
        printf("enter element of matrix\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("our  matric is\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                printf("%d ",matrix1[i][j]);
            }
            printf("\n");
        }
        printf("our  transpose is\n");
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                printf("%d ",matrix1[j][i]);
            }
            printf("\n");
        }


        

        

        return 0;
     }
