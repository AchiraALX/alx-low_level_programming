#include "main.h"

/**
 * _issupper - Will check if the given char c is upper
 * @c: Type char character
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
