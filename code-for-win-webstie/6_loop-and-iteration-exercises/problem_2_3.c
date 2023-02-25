/**
 * C program to all natural numbers in reverse in given range using while loop
 */

#include <stdio.h>

int main()
{
    int i, start, end;

    /* Input start and end limit from user */
    printf("Enter starting value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    /*
     * Run loop from 'start' to 'end' and 
     * decrement by 1 in each iteration
     */ 
    i = start;
    while(i>=end)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}