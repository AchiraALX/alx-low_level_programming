#include "main.h"

/**
 * int_strspn - gets the lenght of a prefix substring
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the initial segment of 's'
 */

unsigned int_strspn(char *s, char *accept)
{
	int i;
	int j;
	int y;

	i = 0;
	y = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				y++;
				break;
			}

			j++;

		}

		if (accept[j] == '\0')
		{
			break;
		}

		i++;

	}

	return (y);
}
