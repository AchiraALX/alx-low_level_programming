#include "head.h"

/**
 * factorial - generates the first f factorials
 * 
 * @n: number type int
 * 
 * Return: Factorial table.
*/

int factorial(int f)
{

        int x, n, fact;

        if (f == 0)
        {
                printf("\t 0 \t\t\t     0");
                return (0);
        }

        for (x = 1; x <= f; x++)
        {
                fact = 1;

                for (n = 1; n <= x; n++)
                {
                        fact = fact * n;
                }

                printf("\t %i \t\t\t    %-2i\n", x, fact);
        }

        return (0);
}