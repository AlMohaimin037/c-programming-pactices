/**
 * C program to display all even numbers from 1 to n using while loop
 */

#include <stdio.h>

int main()
{
    int i, n;
  
    // Input upper limit of even number from user
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);

    i=2; // Since 2 is the first even number
    while(i<=n)
    {
        printf("%d\n", i);

        /*
         * Adding 2 to current even number will give next even number
         */
        i += 2;
    }

    return 0;
}