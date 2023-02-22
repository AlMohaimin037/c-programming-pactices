/**
 * C program to find maximum between three numbers using ladder if else
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    /* Input three numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    
    if((num1 > num2) && (num1 > num3))
    {
        /* If num1 is greater than both */
        max = num1;
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        /* If num2 is greater than both */
        max = num2;
    }
    else if((num3 > num1) && (num3 > num2))
    {
        /* If num3 is greater than both */
        max = num3;
    }

    /* Print maximum number */
    printf("Maximum among all three numbers = %d", max);

    return 0;
}