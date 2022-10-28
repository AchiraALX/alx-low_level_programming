#include "head.h"

/**
 * minimum - function to find the minimum value in an array
 * 
 * Return: the minimum value
*/

int minimum (int values[], int numberOfElements)
{
	int minValue, i;

	minValue = values[0];

	for (i = 1; i < numberOfElements; ++i)
	{
		if (values[i] < minValue)
		{
			minValue = values[i];
		}
	}

	return minValue;
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int array1[5] = {157, -28, -37, 26, 10};
	int array2[7] = {12, 45, 1, 10, 5, 3, 22};

	if (minimum(array1, 5) == -37)
	{
		printf("%s", "Test 1 passed.\n");
	}
	else
	{
		printf("%s", "Test 1 is failing\n");
	}

	if (minimum(array2, 7) == 1)
	{
		printf("%s", "Test 2 passed\n");
	}
	else
	{
		printf("%s", "Test 2 is failing\n");
	}

	printf("%s", "The program worked\n");

	return (0);
}