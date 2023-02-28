/**
 * C program to print hollow rectangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    /* Input number of rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    /* Iterate over each row */
    for(i=1; i<=rows; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                /* Print star for 1st and last row, 1st and last column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}