/**
 * C program to print equilateral triangle or pyramid star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows to print */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=i; j<rows; j++) /* or (j=1; j<=rows - i; j++) or (j=i; j<=rows-1; j++) */
        {
            printf(" ");
        }

        /* Print star */
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
    
    return 0;
}