#include<stdio.h>
#include<string.h>

typedef struct pokemon{
  int speed;
    int attack;
    char tier;
}pokemon;

void fun(pokemon p){
    printf("  before change %d",p.speed);

}
void change(pokemon q){
q.speed=78;

}

 int main(){


pokemon pikachu;
pikachu.speed=65;
pikachu.attack=35;
fun(pikachu);
change(pikachu);// hence structue are pass by value
printf("%d",pikachu.speed);

return 0;
 }