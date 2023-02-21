/**
 * C program to find all angles of a triangle if two angles are given
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    /* Input two angles of triangle: */
    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);

    /*Compute third angle */
    c = 180 - (a + b);

    /* Print value of the third angle */
    printf("Third angle of the triangle = %d", c);
    
    return 0;
}