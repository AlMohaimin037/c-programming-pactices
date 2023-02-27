/**
 * C program to print Fibonacci series in given range
 */

#include <stdio.h>

int main()
{
    int a, b, c, i, start, end;

    /* Input number from user */
    printf("Enter starting term: ");
    scanf("%d", &start);
    printf("Enter end term: ");
    scanf("%d", &end);

    /* Fibonacci magic initialization */
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    /* Iterate through terms */
    while(c <= end)
    {
        /* If current term is greater than start term */
        if(c >= start)
        {
            printf("%d, ", c);
        }
        
        a = b;      // Copy n-1 to n-2
        b = c;      // Copy current to n-1
        c = a + b;  // New term
    }
    
    
    return 0;
}