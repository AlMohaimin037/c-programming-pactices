/**
 * C program to print Armstrong number in a given range
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i;
    int start, end;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("Armstrong number between %d to %d are: \n", start, end);

    for(i=start; i<=end; i++)
    {
        sum = 0;

        /* Copy the value of 'i' to num before processing */
        num = i;

        /* Find total digits in num */
        digits = (int) log10(num) + 1;

        /* Calculate sum of power of digits */
        while(num > 0)
        {
            /* Extract last digit */
            lastDigit = num % 10;

            // Find sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastDigit, digits));

            /* Remove the last digit */
            num /= 10;
        }

        /* Check for Armstrong number */
        if(i == sum)
        {
            printf("%d, ", i);
        }

    }
    
    return 0;
}