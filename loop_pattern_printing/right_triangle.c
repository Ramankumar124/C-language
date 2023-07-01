// 1 quad. right triangle
#include <stdio.h>

int main()
{
    int n;
    printf(" enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");// enter (%d,i ) for reverse
        }
        printf("\n");
    }
    return 0;

}
