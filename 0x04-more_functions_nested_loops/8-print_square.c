#include "main.h"

/**
 * print_square - stacks '#' to make a square of a given size
 * @size: type int number
 * Return:Always 0 (Success)
 */

void print_square(int size)
{
	int x, y;

	x = 0;
	while (x <= size)
	{
		y = 0;
		while (y <= size)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}
}
