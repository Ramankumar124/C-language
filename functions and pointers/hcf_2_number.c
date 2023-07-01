#include<stdio.h>
  int min(int a,int b){

      if(a<b)
        return a;
        else 
        return b;
      
  }
  int gcd(int x,int y){
    int hcf;
    for(int i=1;i<=min(x,y);i++){
      if(x%i==0 && y%i==0){
        hcf=i;
      }
    }
    return hcf;
  }

    int main(){

        int n;
        int m;
        printf("Enter first  number ");
        scanf("%d",&n);

        printf("Enter Second  number ");
        scanf("%d",&m);

        int hcf=gcd(n,m);
        printf(" hcf is %d",hcf );
     return 0;

    }