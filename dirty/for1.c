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
        printf("%2i \t\t\t\t %2i\n", n, triangularNumber);
    }

    return (0);
}