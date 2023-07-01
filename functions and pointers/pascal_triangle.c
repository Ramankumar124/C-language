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
    int k;
    printf("enter a k "); 
scanf("%d",&k);



for(int i=0;i<=k;i++){
    for( int q=0;q<=k-i;q++){
        printf(" ");
    }  
    for(int j=0;j<=i;j++){
        int icj=combination(i,j);
        printf("%d ",icj);
    }
    printf("\n");
}



return 0;
}
