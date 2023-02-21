/**
 * C program to calculate Compound Interest
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float principle, time, rate, CI;

    /* Input principle, time and rate */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate simple interest */
    CI = principle * (pow((1 + rate / 100), time));

    /* Print the resultant value of CI */
    printf("Compound Interest = %f", CI);
    
    return 0;
}