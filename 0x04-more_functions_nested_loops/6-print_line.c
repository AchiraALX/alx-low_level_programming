#include "main.h"

/**
 * print_line - prints '_' in n positive int to make a line
 * @n: type int number
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int x;

	while (x < n)
	{
		_putchar('_');
	}

	_putchar('\n');
}
