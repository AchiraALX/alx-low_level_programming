#include "main.h"

/**
 * _isupper - will chck if the given character c is upper
 * @c: int type number
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
