#include "head.h"

/**
 * main - uses do while to reverse a number
 * 
 * Return: always 0 (Success)
*/

int main(void)
{
        int number, right_digit;

        printf("Enter a number:  ");
        scanf("%i", &number);

        if (number >= -9 && number <= 9)
        {
                printf("%i", number);
        }
        else
        {
                do
                {

                        right_digit = number % 10;
                        printf("%i", right_digit);
                        number = number / 10;

                } while (number != 0);

                printf("\n");
        }

        return (0);
}