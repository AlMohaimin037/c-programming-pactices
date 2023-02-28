/**
 * C program to print mirrored parallelogram star pattern series 
 */

#include <stdio.h>

int main()
{
    int i, j, M, N;

    /* Input number of rows and columns */
    printf("Enter rows: ");
    scanf("%d", &M);
    printf("Enter columns: ");
    scanf("%d", &N);


    for(i=1; i<=M; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=N; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}