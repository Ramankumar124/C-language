#include<stdio.h>
  int swap(int arr[] ){
    int temp=arr[0];
    arr[1]=arr[0];
    arr[0]=temp;
  }
  int main(){

    int arr[2]={4,8};
    printf("First value :%d\n ",arr[0] );
     printf("second value :%d\n ",arr[1] );

     swap(arr);
      printf("First value :%d \n",arr[0] );
     printf("second value :%d \n",arr[1] );

    return 0;
  }