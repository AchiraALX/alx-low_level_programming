#include "main.h"
/**
 * main - check the code
 * print_alphabet - Print alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
