#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit in a number
 * @n: type int number
 * Return: Always 0 (Success)
 */

int print_last_digit(int)
{
	int num;
	
	if (n < 0)
	{
		num = -n % 10;
		_putchar(num + '0');
	else
	{
		num = n % 10;
		_putchar(num + '0');
	}
}
