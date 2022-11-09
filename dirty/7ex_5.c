/**
 * CHALLENGE
 * 
 * Rather than comparing the deference between x
 * and (guess * guess), the program should compare the
 * ratio of the two numbers to 1. The closer this ratio
 * get to 1, the more accurate the approximation of
 * the square root.
 * 
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

        } while (absolute_value((guess * guess) / x - 1.0) >= epsilon);

	

        return (guess);
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	printf("%.2f\n", square_root(144.0, 0.00001));
	printf("%.2f\n", square_root(9.0, 0.0001));

	if (square_root(10000.0, 0.0001) == 100.0)
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
