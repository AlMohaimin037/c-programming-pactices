/**
 * C program to check whether a triangle is valid using nested if
 */

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Initially assume that the triangle is not valid */
    int valid = 0;

    /* Input all three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2)
            {
                /*
                 * If side1 + side2 > side3 and
                 *    side2 + side3 > side1 and
                 *    side1 + side3 > side2 then
                 * the triangle is valid. Hence set
                 * valid variable to 1.
                 */
                valid = 1;
            }
        }
    }

    /* Check valid flag variable */
    if(valid == 1)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    
    return 0;
}