/*Ques : Create a structure ‘person’ having attributes as age
and weight. Access its structure variables using pointers.
*/
#include<stdio.h>
#include<string.h>

typedef struct person{
    int age ;
    float weight;
    char name[40];

}person;

  void change(person* y){// pass by refrence we can change the values
   (*y).age=575;
    y->weight=87.89; //we can also use this method
   strcpy(y->name,"goldy");
 return;
  }

int main(){

    person p1;
    p1.age=45;
    p1.weight=47.7;
    strcpy(p1.name,"Raman");
    
     printf("%d\n",p1.age); 
    printf("%f\n",p1.weight); 
    printf("%s\n",p1.name);
        
    // person* x=&p1;
    //  (*x).age=70;// we can assign and modify value
    //  (*x).weight=384.45;
    //  printf("%d\n",p1.age);
    //  printf("%f\n",p1.weight); 
 
 change(&p1);
   printf("%d\n",p1.age); 
    printf("%f\n",p1.weight); 
     printf("%s\n",p1.name);    
 return 0;
}