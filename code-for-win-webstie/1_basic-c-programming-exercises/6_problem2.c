/**
 * C program to calculate diameter, circumference and area of circle
 */

#include <stdio.h>
#include <math.h> // Used for M_PI

int main()
{
    float radius, diameter, circumference, area;

    /*
     * Input radius of circle from user
     */
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    /*
     * Calculate diameter, circumference and area
     */
    diameter = 2 * radius;
    circumference = 2 * M_PI * radius;
    area = M_PI * (radius * radius);

    /*
     * Print all results
     */
    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units ", area);
    
    return 0;
}