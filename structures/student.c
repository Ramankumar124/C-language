/*Ques : Create a structure to specify data on students with °°
these attributes: Roll number, Name, Department, Course, Year
of joining. Create 2 structure variables. Now, create a function to
check if two students have the same Department. Pass the two
structure variable as input to this function.
*/
#include <stdio.h>
#include <string.h>


  typedef struct student
    {
        char name[50];
        int rollno;
        char dept[50];
        char course[50];
        int year;
    } student;

 void check(student s1,student s2){

    if ( strcmp(s1.dept,s2.dept)!=0){
        printf(" they are not equal");
    }
    else printf( " they are eqaul");
    return ;
 }
int main()
{
  
    student s1, s2;
    strcpy(s1.name, "Raman");
    strcpy(s1.dept, "cse");
    strcpy(s1.course, "b.tech");
    s1.rollno=56;
    s1.year=2022;


    strcpy(s2.name, "goldy");
    strcpy(s2.dept, "civil");
    strcpy(s2.course, "b.tech");
    s2.rollno=346;
    s2.year=2021;

  check(s1,s2);
    return 0;
}