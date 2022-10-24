/**
 * GENERATING FIBONACCI NUMBERS
*/

#include "head.h"

/**
 * main - generates the first 15 fibonacci numbers
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int i, fibonacci[15];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

        for (i = 2; i < 15; ++i)
        {
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i -1];
	}

	for (i = 0; i < 15; ++i)
	{
		printf("%i\n", fibonacci[i]);
	}

	return (0);
}