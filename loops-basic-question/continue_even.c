//print even no. upto 100 by using continue
#include<stdio.h>

  int main(){
     int n=100;
   
   
      for( int i=1;i<=n;i++){
        if(i%2==1){
            continue;
        }
        
    
        printf(" %d",i);
      }
      return 0;
}
    