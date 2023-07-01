/*  given an array of integers
change the value of all odded index
 elemnts to its second multiple and 
 incremnet all even indexed value by 10*/
 #include<stdio.h>
  

     int main(){
        int arr[10]={1,2,5,6,4,8,9,3,7,10};
        for(int i=0;i<10;i++){
            if(arr[i]%2==0){
                arr[i]=arr[i]+10;
            }
               
        else{ 
            arr[i]=arr[i]*2;
          
        }
        
        }
        for(int i=0;i<10;i++)
      { 
          printf("%d  ",arr[i]);
      }
        return 0;
     }