#include "head.h"

/**
 * main - initializes an array using a loop
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int array_values[10] = {0, 1, 2, 3, 4};
	int i;

	for (i = 0; i < 10; ++i)
	{
		array_values[i] = i * i;
	}

	for (i = 0; i < 10; ++i)
	{
		printf("array_values[%i] = %i\n", i, array_values[i]);
	}

	return (0);
}