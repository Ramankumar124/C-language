// num  0 1  triamgle

#include <stdio.h>

int main()
{

    int n, i, j, a;
    printf("Enter a number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            a =1;
        else
            a = 0;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            if (a == 0)
                a = 1;
            else
                a = 0;
        }
        printf("\n");
    }
    return 0;
}