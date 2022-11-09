/**
 * CHALLENGE
 * 
 * Modifying 7functions_8.c program to print the
 * value of guess every time it is calculated
 * and make conclusions. Notice how quickly
 * the number converges to the square root.
 * 
 * CONCLUSIONS
 * 
 * Number of iterations lie upon how big a
 * given number is
*/

#include "head.h"

/**
 * absolute_value - gets the absolute value of the
 * number x
 * 
 *  Return: absolute value
*/

float absolute_value(float x)
{
        if (x < 0)
        {
                x = -x;
        }

        return (x);
}

/**
 * square_root - gets the square root of number
 * x
 * 
 * Return: square root
*/

float square_root(float x, const float epsilon)
{
        float guess = 1.0;

        if (x < 0)
        {
                printf("You can't be finding a root of a negative number\n");
                return (1.0);
        }

        do
        {
                guess = (x / guess + guess) / 2.0;
		printf("%.4f\n", guess);

	} while (absolute_value(guess * guess - x) >= epsilon);

        return (guess);
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        if (square_root(144.0, 0.0001) == 12.0)
	{
		printf("%s", "1st test passed\n");
	}
	else
	{
		printf("1st test failing\n");
	}

	if (square_root(9.0, 0.0001) == 3.0)
	{
		printf("2nd test passed\n");
	}
	else
	{
		printf("2nd test failing\n");
	}

	if (square_root(1000000.0, 0.0001) == 1000.0)
	{
		printf("3rd test passed\n");
	}
	else
	{
		printf("%s","3rd test failing\n");
	}

	printf("%.2f\n", square_root(36.0, 0.0000000001));
	printf("The program worked");

	return (0);
}
