#include "main.h"

/**
 * _strpbrk - searches the string for any of a set of bytes
 * @s: string
 * @accept: string match
 * Return: pointer to the byte in 's' that matches one of the bytes in "accept"
 * Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				p = &s[x];
				return (p);
			}

			y++;

		}

		x++;
	}

	return (0);

}
