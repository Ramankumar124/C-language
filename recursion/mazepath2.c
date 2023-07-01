#include<stdio.h>
//cr->current row
    int maze2(int er, int ec ){
        int rightways=0;
        int downways=0;
        if(1==er && 1==ec)   return 1;
      if(1==er){ // only rightways call
             rightways +=maze2(er,ec-1);
      }

      if(1==ec){ // only downways calls
         downways +=maze2(er-1,ec);

      }
       if(1<er && 1<ec){
           rightways +=maze2(er,ec-1);
               downways +=maze2(er-1,ec);

       }
         
        int totalways=rightways+downways;
        return totalways;
    }
int main(){
  

    int n;
    printf("Enter no of rows");
    scanf("%d",&n);
      int m;
    printf("Enter no of colums");
    scanf("%d",&m);

    int noOfways=maze2(n,m);
    printf("%d",noOfways);
    return 0;


}