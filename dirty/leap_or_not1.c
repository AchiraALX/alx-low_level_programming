#include "head.h"

/**
 * main - determines whether a year is leap or not
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        int y, rem_4, rem_400, rem_100;
        printf("Enter a year: ");
        scanf("%i", &y);

        rem_400 = y % 400;
        rem_4 = y % 4;
        rem_100 = y % 100;

        if (rem_400 == 0 || (rem_4 == 0 && rem_100 > 0))
        {
                printf("This is definitely a leap year.\n");
        }
        else
        {
                printf("Caught off-guard.");
        }

        return (0);
}