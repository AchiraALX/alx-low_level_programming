#include "head.h"

/**
 * main - main function
 * 
 * Return: void
*/

int main(void)
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n \t\t\t Sum fro 1 to n\n");
    printf("--- \t\t\t --------------\n");

    triangularNumber = 0;

    for (n = 1; n <= 10; ++n)
    {
        triangularNumber += n;
        printf(" %i \t\t\t\t %i\n", n, triangularNumber);
    }

    return (0);
}