/*Ques: WAP to find a duplicate element from a given
array of integers.
*/
#include <stdio.h>
int main(){

int arr[5]={5,2,1,3,5};
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]==arr[j]){
            printf("%d is dublicate elment",arr[i]);
        }
    }
}
return 0;

}