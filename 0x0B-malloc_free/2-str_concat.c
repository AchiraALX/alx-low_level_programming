#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}

	s = malloc((len1 + len2 + 1) * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j] = '\0';
	return (s);
}
