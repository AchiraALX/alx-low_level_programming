#include "head.h"

/**
 * main - reverses a number
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int number, right_digit;

        printf("Enter a number: ");
        scanf("%i", &number);

        if (number >= -9 && number <= 9)
        {
                printf("Reversed number is %i\n", number);

        }
        else
        {
                
                while (number != 0)
                {
                        right_digit = number % 10;
                        printf("%i", right_digit);
                        number = number / 10;
                }

                printf("\n");
        }

        return (0);
}