/**
 * C program to print all natural numbers in range using while loop
 */

#include <stdio.h>

int main()
{
    int i, start, end;

    /* Input start and end limit */
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d : \n", start, end);

    /*
     * Print natural numbers from start to end
     */
    i=start;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}