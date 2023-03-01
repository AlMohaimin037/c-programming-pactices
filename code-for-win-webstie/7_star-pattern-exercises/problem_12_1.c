/**
 * C program to print reverse right triangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* INput number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=i; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }
    
    return 0;
}