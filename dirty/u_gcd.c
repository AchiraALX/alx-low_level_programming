#include "head.h"

/**
 * gcd - computes the greatest common divisor of two arbitrary numbers.
 * 
 * Return: gcd (u)
*/

int u_gcd(int u, int v)
{
        int temp;
	
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