/**
 * C program to calculate factorial of a number
 */

#include <stdio.h>

int main()
{
    int i, num;
    unsigned long long fact = 1LL;

    /* Input number from user */
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    printf("Factorial of %d (%d!) = ", num, num);

    /* Run loop from num to 1 */
    for(i=num; i>=1; i--)
    {
        fact = fact * i;
        (i==1)
            ? printf("%d = ", i)
            : printf("%d * ", i);
    }

    printf("%llu", fact);

    return 0;
}