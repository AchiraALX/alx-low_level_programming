#include "main.h"

/**
 * print_diagsums - prints the sum of the 2 diagonals of square matrix of int
 * @a: 2d array of int types
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sum, matrix;

	i = 0;
	sum =0;
	matrix = size * size;

	while (i < matrix)
	{
		if (i % (size + 1) == 0)
		{
			sum += a[i];
		}

		i++;
	}

	print("%d, ", sum);

	while (i < matrix)
	{
		if (i % (size - 1) == 0 && i != (matrix - 1) && i != 0)
		{
			sum += a[i];
		}

		i++;

	}

	print("%d\n", sum);

}
