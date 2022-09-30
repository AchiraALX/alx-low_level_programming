#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 * Return: Always 0 (Success)
 */

void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
