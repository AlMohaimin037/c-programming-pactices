/**
 * C program to swap first and last last digit of a number
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Find last digit */
    lastDigit = num % 10;

    /* Find total number of digits - 1 */
    digits = (int) log10(num);

    /* Find first digit */
    firstDigit = (int) (num / pow(10, digits));

    /* Swapping first and last digit */
    swappedNum = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += (num % ((int) pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d", swappedNum);

    return 0;
}