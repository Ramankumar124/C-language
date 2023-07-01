#include <stdio.h>
// questio not completed
int main()
{
    int n;
    printf(" Enter number of rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
char ch = (char)d; // ch =(char)65->  ch=A' 
           
           if(i%2==1){
            printf(" %d ", j+1-1);}
            else{
                printf(" %c ",ch);
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}