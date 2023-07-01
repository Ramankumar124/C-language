/* Write a program to reverse the array without
 using any extra array.
*/
#include<stdio.h>
int reverse(int arr[]){
    int i=0;
    int j=4;
    for(i,j;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
          arr[j]=temp;
    }
    return 0;
}


 int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr);
    printf("our reversed array is :\n ")
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
 }