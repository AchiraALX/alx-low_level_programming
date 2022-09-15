#include "main.h"

/**
 * _islower - Prints 1 if the character is lowercase and 0 if otherwise
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char c;
	if (c >= 'a' && c <= 'z')
		_putchar('1');
	else
		_putchar('0')
}
