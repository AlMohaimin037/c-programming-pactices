/**
 * C program to check vowel or consonant using ASCII values
 */

#include <stdio.h>

int main()
{
    char ch;

    /* Input a character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Condition for vowel */
    if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 ||
        ch==65 || ch==69 || ch==73 || ch==79 || ch==85)
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        /* Condition for consonant */
        printf("'%c' is Consonant.", ch);
    }
    else
    {
        /*
         * If it is neither vowel nor consonant
         * then it is not an alphabet
         */
        printf("'%c' is not an alphabet.", ch);
    }
    
    return 0;
}