#include<stdio.h>
#include<string.h>

typedef struct pokemon{
  int speed;
    int attack;
    char tier;
}pokemon;



 int main(){


pokemon pikachu;
pikachu.speed=65;
pikachu.attack=35;
pikachu.tier='c';
 pokemon* x=&pikachu;
 printf("%p\n",&pikachu.attack);
 printf("%p\n",&pikachu.tier);
 printf("%p\n",&pikachu.speed);

return 0;
 }