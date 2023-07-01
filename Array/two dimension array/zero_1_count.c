/* Ques : Given a matrix having 0-1 only, find ars
row with the maximum number of 1's.*/
#include<stdio.h>

 int main(){

     int arr[3][3]={{1,0,1},{1,1,1},{1,0,0}};
     int maxcount=0;
     int maxidx=-1,i,j;

     for(  i=0;i<3;i++){
        int count=0;
        for( j=0;j<3;j++){
         if(arr[i][j]==1){
            count++;
         } }
         if(maxcount<count){
            maxcount=count;
            maxidx=i;
         }
         }
     printf(" the maximum of number of 1s are  %d and its index is %d ",maxcount,maxidx);
     return 0;
 }