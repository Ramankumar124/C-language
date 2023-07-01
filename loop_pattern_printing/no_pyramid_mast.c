#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

    {
        int a = i - 1;

        for (int q = 1; q <= n - i; q++)// space print krne ke lia
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)// number traingle
        {
            printf("%d", j);
        }
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d", a);
            a--;
        }

        printf("\n");
    }
    return 0;
}