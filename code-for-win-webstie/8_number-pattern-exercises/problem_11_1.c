/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            // Print the current column number
            printf("%d", j);
        }

        printf("\n");
    }
    
    return 0;
}