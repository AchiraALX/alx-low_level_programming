#include "main.h"

/**
 * print_chessboard - prints the chess board in 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	y = 0;

	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}

		_putchar('\n');
		y++;

	}
}
