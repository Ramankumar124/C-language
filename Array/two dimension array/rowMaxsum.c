/*Homework : Write a program to print the row
number having the maximum sum  in a given matrix.*/
#include <stdio.h>


int main()
{

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
      int i,j;
      int maxsum=0;
    int rowsum[3]={0};
   int maxrow=0;
  

  
    for ( i = 0; i < 3; i++)
    {             
        for ( j = 0; j < 3; j++)
        {   rowsum[i]=rowsum[i] +arr[i][j];}  
            if(rowsum[i]>maxsum){
                maxsum=rowsum[i];
                maxrow=i;
            }
        
    }
    printf(" maximum sum is %d and its row index is  %d ",maxsum,i-1);

    return 0;
}