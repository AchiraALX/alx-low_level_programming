#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints 9 time table starting with 0
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	for (int y = 0; y < 10; y++)
	{
		for (int z = 0; z < 10; z++)
			z *= y;
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
		}
		_putchar('\n')
	}
}
