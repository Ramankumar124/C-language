/*Write a function to insert a
 new character in a string at a given position.*/
#include<stdio.h>
 int main(){
    char str[]="Raman";
    printf("%s\n",str);
    for(int i=4;i>=1;i--){
        str[i+1]=str[i];
        

    }
    str[1]='k';
        printf("%s",str);
        return 0;
 }