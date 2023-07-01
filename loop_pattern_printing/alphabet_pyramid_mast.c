#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

    {
        int a =i-1;

        for (int q = 1; q <= n - i; q++)// space print krne ke lia
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)// number traingle
        {   char chr=(char)(j+64);
            printf("%c", chr);
        }
        for (int k = 1; k <= i - 1; k++)
        {   
            char ch=(char)(a+64);
            printf("%c", ch);
            a--;
        }

        printf("\n");
    }
    return 0;
}