#include "lists.h"

/**
 * _putchar - writes characters to stdout
 *
 * @c: character to be written
 *
 * Return: void
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}