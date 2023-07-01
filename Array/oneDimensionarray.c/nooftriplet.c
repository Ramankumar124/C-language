/*count the no of triplets  in array
whose sum is equal to the given value X*/

#include<stdio.h>

   int main(){

    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    int x=12;
    for(int i=0;i<8;i++){
        for(int  j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
         if(arr[i]+arr[j]+arr[k]==x){
            count++;
            printf("numbers are: %d,%d,%d\n",arr[i],arr[j],arr[k]);
         }
        }
         } }
   
    printf("count is :%d",count);
    return 0;
   }