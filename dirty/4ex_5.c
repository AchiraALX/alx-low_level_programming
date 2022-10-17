#include "head.h"

/**
 * Formatting code
 * main - main function
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int n, two_then_n;

        printf("TABLE OF POWERS OF TWO\n\n");
        printf(" n \t\t\t 2 to the n\n");
        printf("--- \t\t\t-----------\n");

        two_then_n = 1;

        for (n = 0; n <= 10; ++n)
        {
                printf("%-2i \t\t\t    %i\n", n, two_then_n);
                two_then_n *= 2;
        }

        return (0);
}
