// transpose of same array or  without using another array
#include<stdio.h>
  
     int main(){
  


        int arr[3][3];
        printf("enter element of matrix\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        printf("our  matric before changing\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");

        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){// or hum j<i bhi use kr sakte hai
               if(j>=i){int temp=arr[i][j];//if ke bina  koi change nhi ayyega
               arr[i][j]=arr[j][i];
               arr[j][i]=temp;}
            }
        

        }
        printf("our  matric after changing\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
       
     } return 0;
     }