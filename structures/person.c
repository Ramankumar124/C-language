/*Ques : Create a structure type ‘Person’ with name,
salary and age as its attributes. Declare and initialize 2
variables for this. Print the name of first person and age
of the other.
*/
#include<stdio.h>
#include<string.h>

 int main(){
    struct person{
        char name[50];
        float salary;
        int age;
    };
        struct person raman;
        strcpy(raman.name,"Ramank");
        raman.salary=5400.5;
        raman.age=18;
        printf(" name of  1st person is %s\n",raman.name);
       struct person goldy;
       strcpy(goldy.name,"goldy");
       goldy.age=20;
       goldy.salary=5399.0;
          printf(" age of 2nd person is %d\n",goldy.age);
    return 0;
 }