#include<stdio.h>

  int main(){
     
   struct pokemon// user defined data type
   {
    /* data */
    int hp;    /*iska matlab ye nhi hai 
                ki humne ek daba bnaya iska ye 
               matlab hai ki humne ek new data type bnaya*/
    int speed;
    int attack;
    char tier;
   

   }charizard;//another way of  dec a variable
   struct pokemon pikachu;// ek bda dba bn gya 3 parts ke sath

  // pikachu.attack=60;
  printf("Enter attack of pikachu ");
  scanf("%d",&pikachu.attack);
   pikachu.hp=50;
   pikachu.speed=100;
   pikachu.tier='c';
   printf("Attack of pikachu %d\n",pikachu.attack);

   
   charizard.attack=100;
   charizard.hp=30;
   charizard.speed=70;
   charizard.tier='a';

printf("hp of charizard %d",charizard.hp);
     // or we can declare also by using this method
  //   pokemon pikachu ={ 60,57,58,'raman',"goldy"};
    // order matter jo str mai order hai use order se likhna hai 
     return 0;
  }