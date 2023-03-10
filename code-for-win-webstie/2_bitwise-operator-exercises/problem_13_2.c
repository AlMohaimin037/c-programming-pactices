/**
 * C program to rotate bits of a number
 */


#include <stdio.h>

#define INT_SIZE sizeof(int)        // Size of int in bytes
#define INT_BITS INT_SIZE * 8 - 1   // Size of int in bits - 1


/* Function declarations */
int rotateLeft(int num, unsigned int rotation);
int rotateRight(int num, unsigned int rotation);


int main()
{
    int num;
    unsigned int rotation;

    /* Input number from user */
    printf("Enter a number: ");
    scanf("%d", &num);

    /* Input number of rotation */
    printf("Enter number of rotation: ");
    scanf("%u", &rotation);

    
    /* Print rotated number */
    printf("\n%d left rotated %u times = %d\n", num, rotation, rotateLeft(num, rotation));
    printf("%d right rotated %u times = %d\n", num, rotation, rotateRight(num, rotation));

    
    return 0;
}



int rotateLeft(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while(rotation--)
    {
        num = (num << 1) | (1 & (num >> INT_BITS));
    }

    return num;
}




int rotateRight(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while(rotation--)
    {
        num = ((num >> 1) & (~(1 << INT_BITS)) | ((num & 1) << INT_BITS));
    }
    
    return num;
}