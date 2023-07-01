#include<stdio.h>

  int main(){
   // int arr[5]={4,4,3,4,2,1};
   //arr[4]=100; update the value of arr;
    // we can also use char,float data types in arrey
  
      printf("Enter first element :");
      scanf("%d",&arr[0]);
      printf("Enter second element :");
      scanf("%d",&arr[1]);
      printf("Enter third element :");
      scanf("%d",&arr[2]);
      printf("Enter fourth element :");
      scanf("%d",&arr[3]);
      printf("Enter fifth element :");
      scanf("%d",&arr[4]);
      printf("%d",arr[3]);
      
    int arr[5];
      for(int i=0;i<=5;i++){
        printf("Enter element no %d\n",i);
        scanf("%d",&arr[i]);

      }
      for(int i=0;i<=5;i++){
        
       printf("%d element is %d  ",i,arr[i]);
        
      }
    return 0;

  }