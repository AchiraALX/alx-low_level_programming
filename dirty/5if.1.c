#include "head.h"

/**
 * main - finds the absolute value of a number
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int num;
        printf("Enter n number:  ");
        scanf("%i", &num);

        if (num < 0)
        {
                num *= -1;
        }

        printf("The abs value is %i \n", num);

        return (0);
}