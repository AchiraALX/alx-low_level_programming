/**
 * CHALLENGE
 * 
 * write a function that raises an integer to a positive
 * integer power
 * 
*/

#include "head.h"

/**
 * x_to_the_n - raises an integer to a +ve
 * integer power
 * 
 * @x: number type int
 * 
 * @n: the power
 * 
 * Return: int
*/

long int x_to_the_n(int x, unsigned int n)
{
        unsigned int i;
        int j;

        j = x;

        if (n == 0)
        {
                return 1;
        }

        for (i = 0; i < n - 1; ++i)
        {
                x *= j;
        }

        return (x);
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        long int result;
        unsigned int n;
        int x;

        printf("Enter base number : ");
        scanf("%i", &x);
        printf("%s", "Enter the power : ");
        scanf("%u", &n);

        result = x_to_the_n(x, n);
        printf("\n = %li\n", result);

        return (0);
}

