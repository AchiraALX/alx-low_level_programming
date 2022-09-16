#include "main.h"

/**
 * print_diagonal - park '\' diagnolly
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
