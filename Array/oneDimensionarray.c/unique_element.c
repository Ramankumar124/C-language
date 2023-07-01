/*S
*Ques : Find the unique number in a given Array where
all the elements are being repeated twice with one
value being unique.*/
#include <stdio.h>
#include <stdbool.h>
int main(){
 
int arr[5]={5,2,1,2,5};
for(int i=0;i<5;i++){
   bool flag=false;
    for(int j=i+1;j<5;j++){
        if(arr[i]==arr[j]){
            flag=true;
        }
    }
    if(flag==false){
        printf(" uniques no is %d",arr[i]);
        break;// agr multiple unique nikalne hai to break hta do
    }
}
return 0;

}