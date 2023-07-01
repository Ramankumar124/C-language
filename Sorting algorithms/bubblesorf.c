// ism hum max element ko swap kr krke last mai kr dete hai 
#include<stdio.h>

  int main(){
    int arr[5]={2,3,1,5,4};
  
   int n=5; 
     for (int  i = 0; i <n; i++)
 
    {
        printf("%d ",arr[i]);
    }
    //bubble sort
    // but this code is not optimised so we used n-1-i instead of n-2
   for( int i =0;i<n-1;i++){// for every pass
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

   }
   printf("\n");
    for (int  i = 0; i <n; i++)
 
    {
        printf("%d ",arr[i]);
    }
    return 0;
    

  }
  #include<stdio.h>

      int main(){

        return 0;
      }
              