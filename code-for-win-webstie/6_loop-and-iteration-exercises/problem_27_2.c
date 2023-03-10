/**
 * C program to print all prime numbers between in given range
 */

#include <stdio.h>

int main()
{
    int i, j, start, end;
    int isPrime;

    /* Input upper and lower limit to print prime */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All prime numbers between %d to %d are:\n", start, end);

    // Make sure that lower limit does not go below 2
    // Since 2 is first prime number
    if(start < 2)
        start = 2;
    
    /* Find all Prime numbers between 1 to end */
    for(i=start; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1;

        /* Check if the current number of i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }
    
    return 0;
}