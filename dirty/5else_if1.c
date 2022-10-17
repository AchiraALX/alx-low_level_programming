#include "head.h"

/**
 * main - determines if the character entered is of type
 * int (0-9), alphabet (a - z, A - Z) or special (anything else)
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        char c;

        printf("Enter a single character:  ");
        scanf("%c", &c);

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                printf("%c is an alphabet.", c);
        }
        else if (c >= '0' && c <= '9')
        {
                printf("%c is an integer.", c);
        }
        else
        {
                printf("The character %c must be a special character.", c);
        }

        return (0);
}