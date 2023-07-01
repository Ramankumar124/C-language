/*Ques : Rotate the given array ‘a’ by k steps, where k re
non-negative.

Note : k can be greater than n as well where n is the
size of array ‘a’.*/
#include <stdio.h>

   

void reverse(int arr[],int si,int ei){

    for(int  i=si, j =ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
          arr[j]=temp;
    }
    return ;
}


 int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int k=3;
    k =k %n;
    reverse(arr,0,n-1);// gives 54321
    reverse(arr,0,k-1);//gives  34521
    reverse(arr,k,n-1);// gives 34512
   
    printf("our reversed array is :\n ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
     return 0;
 }


