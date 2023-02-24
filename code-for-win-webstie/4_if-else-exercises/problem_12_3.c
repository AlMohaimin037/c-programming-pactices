/**
 * C program to print number of days in a month using array
 */

#include <stdio.h>

int main()
{
    /* Constant number of month declarations */
    const int MONTHS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;

    /* Input month number from user */
    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month >= 1 && month <= 12)
    {
        /* Print number of days */
        printf("%d days", MONTHS[month - 1]);
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
    
    return 0;
}