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



/**
 * Function to rotate bits of a number to left.
 * 
 * @num         Number to rotate
 * @rotation    Number of times to rotate to left
 */
int rotateLeft(int num, unsigned int rotation)
{
    int DROPPED_MSB;

    // The effective rotation
    rotation %= INT_BITS;


    // Loop till rotation becomes 0
    while(rotation--)
    {
        // Get MSB of num before it gets dropped
        DROPPED_MSB = (num >> INT_BITS) & 1;

        // Left rotate num by 1 and
        // Set its dropped MSB as new LSB
        num = (num << 1) | DROPPED_MSB;
    }

    return num;
}



/**
 * Function to rotate bits of a number to right.
 * 
 * @num         Number to rotate
 * @rotation    Number of times to rotate to right
 */
int rotateRight(int num, unsigned int rotation)
{
    int DROPPED_LSB;

    // The effective rotation
    rotation %= INT_BITS;


    // Loop till rotation becomes 0
    while(rotation--)
    {
        // Get LSB of num before it gets dropped
        DROPPED_LSB = num & 1;

        // Right shift num by 1 and
        // Clear its MSB
        num = (num >> 1) & (~(1 << INT_BITS));

        // Set its dropped LSB as new MSB
        num = num | (DROPPED_LSB << INT_BITS);
    }
    
    return num;
}