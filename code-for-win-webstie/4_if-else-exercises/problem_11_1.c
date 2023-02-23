/**
 * C program to print day name of week
 */

#include <stdio.h>

int main()
{
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Saturday");
    }
    else if(week == 2)
    {
        printf("Sunday");
    }
    else if(week == 3)
    {
        printf("Monday");
    }
    else if(week == 4)
    {
        printf("Tuesday");
    }
    else if(week == 5)
    {
        printf("Wednesday");
    }
    else if(week == 6)
    {
        printf("Thursday");
    }
    else if(week == 7)
    {
        printf("Friday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }
    
    return 0;
}