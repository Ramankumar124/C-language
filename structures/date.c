/*Ques : Create a structure ‘date’ that contains three
members namely date, month and year. Create 2 structure
variables with different dates and now compare the two. If
the dates are equal then display message as “Equal”
otherwise “Unequal”.*/
#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main()
{

    typedef struct date
    {
        int day;
       char  month[50];
        int year;

    } date;

    date a, b;

    a.day = 3;
     strcpy( a.month,"feb");
    a.year = 2022;

    b.day = 3;
    strcpy( b.month,"feb");
    b.year = 2022;

   // if (a == b) // ise hume pta chla hai hum pure str ko cmp nhi kr sakte hai

  bool flag = true;
  if(a.day!=b.day) flag = false;
// if(a.month!=b.month) flag = false;// ese nhi hoga islia humne strcmp bnaya hai
if(strcmp(a.month,b.month)!=0) flag =false;
  if(a.year!=b.year) flag = false;

if ( flag == true) 
    {
        printf("dates are equal");
    }
    else
    {
        printf(" dates are unequal");
    }



    return 0;
}