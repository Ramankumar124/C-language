#include<stdio.h>
int main(){
 int n;
 printf("Enter size of array :");
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n-1;i++){
    printf("Enter element of array :");
    scanf("%d",&arr[i]);
 }
    printf("%d",arr[3]);
    return 0;
 }