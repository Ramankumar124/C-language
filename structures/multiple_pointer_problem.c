// facing problem to declare multiple pointers
#include<stdio.h>

 int main(){
    int x=5,y=4; // we can declare multiple vairbles
    // int *a=&x,b=&y;   ye nhi chalega multiple pointer
     //                  problem ye ek int* smgh rha hai
      //                  or dusre ko int                   
    // printf("%p\n",a);
    // printf("%p",b);  

// solution 
 typedef int* pointer;
 pointer a=&x,b=&y;
    printf("%p\n",a);
     printf("%p",b);  
    return 0;
 }