/* write a program to copy the contents of one
array into another in the reverse order*/
#include<stdio.h>


 int main(){

    int arr[5]={1,2,3,4,5};
    int arr2[5];

for(int i=0;i<=5;i++){
    arr2[i]=arr[4-i];
}
         printf("values of copied  array :");
    for(int i=0;i<=5;i++){
        printf("%d ",arr2[i]);
        
    }
    return 0;
 }
 