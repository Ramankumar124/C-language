// find max and min value find its index(i,j)
#include <stdio.h>
#include <limits.h>

int main()
{

    int arr[3][3] = {1, 2, 3, -4, 5, 6, 7, 48, 9};
    int max = INT_MIN;
    int min= INT_MAX;

    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                
                
            }
            if (min> arr[i][j])
            {
                min= arr[i][j];
            }
        }
    }
    printf(" maximum value is %d and its index is %d,%d \n", max,i,j);
     printf("minimum value is %d", min);
    return 0;
}