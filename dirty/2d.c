#include "head.h"

/**
 * main - intro to 2d arrays
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int matrix[4][5] = {
		{10, 5, -3, 17, 82},
		{9, 0, 0, 8, -7},
		{32, 20, 1, 0, 14},
		{0, 0, 8, 7, 6}
	};

	int i, p, x, y;

	x = 1;
	for (i = 0; i < 4; ++i)
	{
		y = 1;
		for (p = 0; p < 5; ++p)
		{
			printf("[%i][%i] = %i\t", x, y, matrix[i][p]);
			y++;
		}
		
		x++;
		printf("\n");

	}

	return (0);
}
