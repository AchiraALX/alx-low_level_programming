#include "head.h"

/**
 * main - prints triangular numbers
 * 
 * Return: Always 0 (success)
*/

int main(void)
{

        int n, number, triangularNumber;

        printf("Enter number you would like.");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; n++)
        {

                triangularNumber += n;
                printf("%2i \t\t\t %2i\n", n, triangularNumber);

        }

        return (0);
}