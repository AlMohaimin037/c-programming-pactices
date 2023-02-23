/**
 * C program to check whether a character is uppercase or lowercase using inbuilt library function
 */

#include <stdio.h>
#include <ctype.h> /* Used for isupper() and islower() */

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(isupper(ch))
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(islower(ch))
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }
    
    return 0;
}