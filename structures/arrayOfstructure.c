#include<stdio.h>
#include<string.h>
 int main(){

    typedef struct pokemon{
    int speed;
    int attack;
    char tier;
    char name[50];

    }pokemon;
    
pokemon arr[3];
arr[0].attack=47;
arr[0].tier='c';
arr[0].speed=453;
strcpy(arr[0].name,"pikachu");

arr[1].attack=7;
arr[1].tier='f';
arr[1].speed=43;
strcpy(arr[1].name,"charizard");

arr[2].attack=77;
arr[2].tier='s';
arr[2].speed=76;
strcpy(arr[2].name,"balbosor");
  int j=1;
for(int i=0;i<3;i++){
    printf("pokemon %d name  is  %s\n",j,arr[i].);
    printf("pokemon %d attacks is  %d\n",j,arr[i].attack);
    printf("pokemon  %d tier  is  %c\n",j,arr[i].tier);
    printf("pokemon %d speed  is  %d\n",j,arr[i].speed);
   j++; 
}   

    return 0;
 }