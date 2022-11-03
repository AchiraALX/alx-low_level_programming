#include "head.h"

/**
 * absoluteValue - gets the absolute value of number x
 *
 * Return: absolute value
*/

float absoluteValue(float x)
{
	if (x < 0)
	{
		x = -x;
	}

	return x;
}

/**
 * squareRoot - gets the square root of number x
 * 
 * Return: square root
*/

float squareRoot(float x)
{
	const float epsilon = .00001;
	float guess = 1.0;

	if (x < 0)
	{
		printf("%s", "You cannot find a root of a negative number\n");
		return (1.0);
	}

	while (absoluteValue(guess * guess - x) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	}

	return guess;
}

/**
 * main - main function
 * 
 * Return: 0 on success and 1 on error
*/

int main(void)
{
	if (squareRoot(144.0) == 12.0)
	{
		printf("%s", "1st test passed\n");
	}
	else
	{
		printf("1st test failing\n");
	}

	if (squareRoot(9.0) == 3.0)
	{
		printf("2nd test passed\n");
	}
	else
	{
		printf("2nd test failing\n");
	}

	if (squareRoot(10000.0) == 100.0)
	{
		printf("3rd test passed\n");
	}
	else
	{
		printf("%s","3rd test failing\n");
	}

	printf("%.2f\n", squareRoot(-6.0));
	printf("The program worked");

	return (0);
}
