/**
 * C program to print day of week
 */

#include <stdio.h>

int main()
{
    /* Declare constant name of weeks */
    const char * WEEKS[] = { "Saturday", "Sunday", "Monday",
                            "Tuesday", "Wednesday", "Thursday",
                            "Friday"};
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    if(week > 0 && week < 8)
    {
        /* Print week name using array index */
        printf("%s", WEEKS[week-1]);
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}