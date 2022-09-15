#include "main.h"

/**
 * _isalpha - Returns 1 if the character is a an alpha and 0 if otherwise.
 * Return:Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
