#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the size of rhombus: ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (i = 1; i <=2*n+1; i++)
    { 
        printf("%d",i);
        
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {   int a=1;
        for (j = 1; j <= nst; j++)
        {
            printf("%d",a);
            a++;
        }
        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (j = 1; j <= nst; j++)
        {
            printf("%d",a);
            a++;
        }
        nst = nst - 1;
        nsp = nsp + 2;
        printf("\n");
    }
    return 0;
}