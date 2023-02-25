/**
 * C program to print all even numbers from 1 to n without if
 */

#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit of even number from user */
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    /*
     * Start loop from 2, increment it by 2,
     * in each repetition
     */
    for(i=2; i<=n; i+=2)
    {
        printf("%d\n", i);
    }

    return 0;
}