/**
 * C program to print box number pattern with cross center
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
            if(i == j || (j == (cols+1) - i))
            {
                printf("X");
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