//given a array &a number out if x lies in the array
// or not if yes then print the index

#include<stdio.h>
#include<stdbool.h>

  int main(){
    int arr[6]={1,2,5,3,4,5};
    int x=5;
    bool flag=false;
    int i;
        int index=0;
    for( i=0;i<6;i++){// agr last index chaiye to ulta loop chla do
        if(arr[i]==x){
         flag=true; 
          index=i;
         break;// agr two times value hai to print pahle wala hi hoga
    }
        }
        if(flag==true){
            printf("%d is present in the array its index is %d ",x,index);
           
        }
        else{
            printf("%d is not present in the array  ",x);
            
        }
        
    return 0;
  }

  