/**
 * C program to check leap year using conditional operator
 */

#include <stdio.h>

int main()
{
    int year;

    /*
     * Input year from user 
     */
    printf("Enter any year: ");
    scanf("%d", &year);

    printf("%s", ((year%4==0 && year%100!=0) ?
                    "LEAP YEAR" : (year%400==0) ?
                        "LEAP YEAR" : "COMMON YEAR"));
    
    return 0;
}