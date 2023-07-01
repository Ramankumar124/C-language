#include<stdio.h> 
 #include<string.h>
  int main(){
 
    typedef struct book// iska nam 
    {
        char name[50];
        int price;
        int n_pages;
    }bk;// ise change ho gya 
    bk a ;// ab sidha bk likho km bn jaygea
 
   strcpy(a.name,"Radhe raman");
    a.price=500;
    a.n_pages=300;
    printf("Name of book :%s\n",a.name);
    printf("price of book: %d\n",a.price);
    printf("N of pages  of book : %d\n",a.n_pages);
   
    struct book b ;
 
   strcpy(b.name,"gita ");
    b.price=200;
    b.n_pages=100;
    printf("Name of book :%s\n",b.name);
    printf("price of book: %d\n",b.price);
    printf("N of pages  of book : %d\n",b.n_pages);
   
    return 0;
  }