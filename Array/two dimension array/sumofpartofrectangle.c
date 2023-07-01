/*given a matrix a of dimension n*m and 2 c
coordinates (l1,ri) and (l2,r2),return the sum of 
the rectangle from (l1,r1) to (l2,r2)*/

#include<stdio.h>

 int main(){
  int l1=0,l2=2,r1=1,r2=2;
     int arr[3][3]={1,1,5,1,1,1,1,1,1};
     int sum=0;
     for( int i=l1;i<l2;i++){
        for(int j=r1;j<=r2;j++){
         sum =sum+arr[i][j];

     }}
     printf("%d",sum);
     return 0;
 }



   