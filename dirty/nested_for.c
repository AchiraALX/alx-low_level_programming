#include "head.h"

/**
 * main - main function
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int n, number, triangularNumber, counter;

        for ( counter = 1; counter <= 5; counter++)
        {

                printf("Enter the number: \t");
                scanf("%i", &number);

                triangularNumber = 0;

                for (n = 1; n <= number; n++)
                {
                        triangularNumber += n;
                        printf("%3i \t\t %3i\n", n, triangularNumber);
                }
                
        }

        return (0);
}