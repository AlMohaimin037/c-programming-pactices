/**
 * C program to print hollow parallelogram star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    /* Input number of rows and columns */
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }

        /* Print star and center spaces */
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}