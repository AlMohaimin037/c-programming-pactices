/** 
 * C program to find maximum between two numbers
 */

#include <stdio.h>

int main()
{
    int num1, num2, max;

    /* Input two numbers from user */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /* Compare num1 with num2 */
    if(num1 > num2)
        max = num1;
    else
        max = num2;
    
    printf("%d is maximum.", max);
    
    return 0;
}