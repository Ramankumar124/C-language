// to count the no. of digits in given no.
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        num /= 10;  // Divide by 10 to remove the rightmost digit
        count++;    // Increment the count
    }
    printf("The number of digits is %d", count);
    return 0;
}