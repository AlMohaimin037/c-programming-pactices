/**
 * C program to find area of rectangle
 */

#include <stdio.h>

int main()
{
    float length, width, area;

    /**
     * Input length and width of rectangle
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate area of rectangle */
    area = length * width;

    /* Print area of rectangle */
    printf("Area of rectangle = %f sq. units ", area);
    
    return 0;
}