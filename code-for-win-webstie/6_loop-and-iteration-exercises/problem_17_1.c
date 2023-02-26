/**
 * C program to check whether a number is palindrome or not
 */

#include <stdio.h>

int main()
{
    int n, num, rev = 0;

    /* Input a number from user */
    printf("Enter any number to check palindrome: ");
    scanf("%d", &n);

    /* Copy original value of 'n' to 'num' */
    num = n;

    /* Find reverse of n and store in rev */
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

    /* Check if reverse is equal to 'num' or not */
    (rev == num )
        ? printf("%d is palindrome.", num)
        : printf("%d is not palindrome.", num);
        
    return 0;
}