/* print a  cube pattern 
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4   */
#include <stdio.h>

int main()
{
    int n;
    printf(" enter a number :");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("%d",j);// enter (%d,i ) for reverse
        }
        printf("\n");
    }
    return 0;

}
