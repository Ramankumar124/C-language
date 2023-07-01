#include <stdio.h>
#include <string.h>
int main()
{

   typedef struct pokemon
   {
      int speed;
      int attack;
      char tier;
      char name[50];

   } pokemon;

   pokemon arr[3];
   int j = 1;
   for (int i = 0; i < 3; i++)
   {
      printf("Enter name of %d pokemon", j);
      scanf("%s",arr[i].name);
      printf("Enter attack  of %d pokemon", j);
      scanf(" %d", &arr[i].attack);
      printf("Enter tier  of %d pokemon", j);
      scanf(" %c", &arr[i].tier);
      printf("Enter speed of %d pokemon", j);
      scanf(" %d", &arr[i].speed);
      j++;
   }
   for (int i = 0; i < 3; i++)
   {
      printf("pokemon %d name  is  %s\n", i+1, arr[i].name);
      printf("pokemon %d attacks is  %d\n", i+1, arr[i].attack);
      printf("pokemon  %d tier  is  %c\n", i+!, arr[i].tier);
      printf("pokemon %d speed  is  %d\n", i+1, arr[i].speed);
      j++;
   }

   return 0;
}