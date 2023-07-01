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
    pokemon a, b, c;
    a.attack = 100;
    a.speed = 123;
    a.tier = 'A';
    strcpy(a.name, "charizard");

    // one str data to another
    // we can also do this but this is not a good code
    // strcpy(b.name,a.name);
    // b.name=a.name;
    // b.speed=a.speed;

    b = a; // we can use this, str ka feature hai ye
    printf("%s", b.name);

    return 0;
}