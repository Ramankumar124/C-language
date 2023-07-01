// print combination  nCr
#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
         fact=fact*i;
    }
        return fact;
}
int combination(int x,int y){
    int ncr=factorial(x)/(factorial(y)*factorial(x-y));
    return ncr;
}
    

int main(){
int n;
printf("enter a n "); 
scanf("%d",&n);
int r;
printf("enter a r ");
scanf("%d",&r);
int result =combination(n,r);
printf("%d",result);




return 0;
}
