#include "main.h"

/**
 * _putchar - write a character to stdout
 *
 * @c: character to be written
 *
 * Return: void
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
