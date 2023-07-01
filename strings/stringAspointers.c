#include<stdio.h>
#include<string.h>

int main(){
char str[]="Raman kumar";
// char* ptr=str;// ptr now points tp str[0]
// //printf("%p",ptr);
// int i=0;
// while(*ptr!='\0'){
//     printf("%c",*ptr);
//     ptr++;
//     i++;
// }
char* ptr ="raman this side";
// pr string  ke individual modify nhi ho skta hoga

printf("%s",ptr);
// pr hum entire string modify kr sakte hai
ptr="goldy";
printf("%s",ptr);
    return 0;
}