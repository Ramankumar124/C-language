#include<stdio.h>
#include<string.h>

int main(){
   char str[40];
   puts("Enter a string");
   gets(str);
   //size
   int size=0;
   int i=0;
   while(str[i]!='\0'){
       size++;
       i++;
   }
   printf("%d",size);
  
for(int k=0,j=size-1;k<=j;k++,j--){
    char temp=str[k];
    str[k]=str[j];
    str[j]=temp;
}
puts("out reversed string is :");
puts(str);
  return 0;
}