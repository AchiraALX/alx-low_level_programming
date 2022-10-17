#include "head.h"

/**
 * main - implements the else-if construct
 *
 * Return: Always (0) Success
 */

int main(void)
{
        int number, sign;

        printf("Please enter n number:  ");
        scanf("%i", &number);

        if (number > 0)
        {
                sign = 1;
        }
        else if (number == 0)
        {
                sign = 0;
        }
        else
        {
                sign = -1;
        }

        printf("The sign for this number is %i", sign);

        return (0);
}