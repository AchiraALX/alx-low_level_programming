#include "head.h"

/**
 * gcd - computes the greatest common divisor of two arbitrary numbers.
 * 
 * Return: gcd (u)
*/

int gcd(void)
{
        int temp;
        int u;
        int v;

        printf("Enter the first digit: ");
        scanf("%i", &u);
        printf("Enter the second digit: ");
        scanf("%i", &v);

        if (u == 0 || v == 0)
        {
                return 0;
        }
        else if (u < 0 || v < 0)
        {
                printf("ERROR.Couldn't find gcd of a -ve NO.\n");
                exit (1);
        }
        else
        {
                while (v != 0)
                {
                        temp = u % v;
                        u = v;
                        v = temp;
                }

                return u;
        }
}