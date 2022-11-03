#include "head.h"

/**
 * multiplyBy2 - changes value in an array
 * 
 * Return: array of changed values
*/

void multiplyBy2(float array[], int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		array[i] *= 2;
	}
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
	int i;

	multiplyBy2(floatVals, 4);

	for (i = 0; i < 4; ++i)
	{
		printf("%.2f ", floatVals[i]);
	}

	printf("\n");

	return (0);
}