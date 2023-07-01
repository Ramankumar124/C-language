#include<stdio.h>
#include<string.h>

 int main(){

  char *str="Raman kumar";
  // lenth of string
  int x= strlen(str);// does not consider \0
  printf(" lenth of string is %d\n",x);
  char str1[]="goldy";
  char str2[]="Radhe";
  //copy string
   printf(" first string before copy %s\n",str1);
  strcpy(str1,str2);
 
  printf(" fisrt string after cpy %s\n",str1);
// concatinate
strcat(str1 ,str2);
 printf(" fisrt string after concatination %s \n",str1);
//sr=tring compare
if(strcmp(str1,str2)==0){
    printf(" strings are same\n");
}
 return 0;
 }