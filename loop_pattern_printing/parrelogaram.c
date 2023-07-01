/*#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)

        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for(int l=n+1;l<=2*n;l++)
         printf("\n");
    }

    return 0;
/
#include <stdio.h>

int main() {
    int height, width;
    
    printf("Enter the height of the parallelogram: ");
    scanf("%d", &height);
    
    printf("Enter the width of the parallelogram: ");
    scanf("%d", &width);
    
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        for (int k = 1; k <= width; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
*/
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of rhombus: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j < n; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


