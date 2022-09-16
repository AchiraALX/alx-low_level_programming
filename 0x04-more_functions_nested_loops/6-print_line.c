#include "main.h"

/**
 * print_line - prints '_' in n positive int to make a line
 * @n: type int number
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');
		x++;
	}

	_putchar('\n');
}
