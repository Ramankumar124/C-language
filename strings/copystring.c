#include<stdio.h>
#include<string.h>
int main(){
 
 char s1[]="Raman kumar";
 char *s2=s1;
 //lets ca=hange in s1
 s1[0]='j';
 printf("%s",s2);//shallow copy
 return 0; 

}