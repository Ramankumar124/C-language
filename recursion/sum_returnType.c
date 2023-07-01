#include<stdio.h>

int sum(int n){
    if(n==0 || n==1){
      
        return n;
    }
    int add=n+sum(n-1);
    return add;
}

int main(){
    int n;
printf("Enter a number");
scanf("%d",&n);
int add =sum(n);
printf("%d",add);
return 0;
}