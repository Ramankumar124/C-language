/*Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a matrix*/
#include<stdio.h>
  
     int main(){
  int n;// no of students
  printf("enter number of students");
  scanf("%d",&n);
        int data[n][3];
        printf("enter marks of student");
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&data[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                printf("%d ",data[i][j]);
            }
            printf("\n");
        }
        return 0;
     }
