/* count the number of elements in 
given array greater than a number x*/
#include<stdio.h>

   int main(){
    int count=0;
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int num[10]={12,35,56,78,100,56,23,2,2,34};
    for(int i=0;i<10;i++){
        if(num[i]>n){
            count++;

        }}
        printf("%d",count);
        return 0;}
    