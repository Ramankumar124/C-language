#include<stdio.h>
#include<string.h>

 int main(){

typedef struct pokemon{
  int speed;
    int attack;
    char tier;
}pokemon;
typedef struct legenedrypokemon{
    int ability;
     pokemon normal;// normal pkmon ab pure pkmon str ko represent krega

}legenedrypokemon;
 
  typedef struct godpokemon{
     int specialability;
     legenedrypokemon legendary;
     }godpokemon;
  


 
 legenedrypokemon zadu;
 zadu.normal.attack=2466;
 zadu.normal.speed=5789;
 zadu.normal.tier='s';



 godpokemon arceus;
 arceus.specialability=2;
 arceus.legendary.ability=2;
 }

