/**
 * C program to print all factors of a number
 */

#include <stdio.h>

int main()
{
    int i, num;

    /* Input number from user */
    printf("Enter any number to find tis factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    /* Iterate from 1 to num */
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            (i == num)
                ? printf("%d.", i)
                : printf("%d, ", i);
        }
        
    }

    return 0;
}