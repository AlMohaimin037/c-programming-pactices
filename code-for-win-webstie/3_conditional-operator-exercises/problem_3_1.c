/**
 * C program to check even or odd number using conditional operator
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input a number from user */
    printf("Enter any number to check even odd: ");
    scanf("%d", &num);

    /*
     * If num % 2 == 0 then
     *      print it is even
     * else
     *      printf it is odd
     */
    (num%2 == 0)
        ? printf("The number is EVEN")
        : printf("The number is ODD");
        
    return 0;
}