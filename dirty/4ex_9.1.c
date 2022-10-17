/**
 * CHALLENGE
 * 
 * Rewriting the for loop to while loop and
 * checking if the results are identical.
 * 
*/

#include "head.h"

/**
 * main - checks the tests
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        /**
         * @t_f: for loop triangular number
         * @t_w: while loop triangular number
        */

        int n, t_f, t_w;

        /* for loop */
        t_f = 0;
        for (n = 1; n <= 200; n = n + 1)
        {
                t_f = t_f + n;
        }

        /* while loop */
        t_w = 0;
        n = 1;
        while (n <= 200)
        {
                t_w = t_w + n;
                n = n + 1;
        }

        if (t_f == t_w)
        {
                printf("Test passed.");
        }

        return (0);
}