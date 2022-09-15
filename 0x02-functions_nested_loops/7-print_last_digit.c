#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit in a number
 * @n: type int number
 * Return: Always 0 (Success)
 */

int print_last_digit(int)
{
	if (n < 0)
	{
		l = -n % 10;
		_putchar(l);
	}
	else
	{
		l = n % 10;
		_putchar(l);
	}
}
