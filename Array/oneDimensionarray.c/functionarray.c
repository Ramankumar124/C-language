#include<stdio.h>
int fun(int x[])
   { x[0]=46;// it means we can change value of array element without call by refremce
    return 0;
  }
 int main(){
  int arr[5]={1,2,3,4,5};
 printf("%d\n",arr[0]);
    fun(arr);
    printf("%d",arr[0]);
    return 0;

 }


 