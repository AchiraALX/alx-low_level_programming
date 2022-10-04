#include "main.h"

/**
* _strdup - returns apointer to a newly allocated space in memory
*
* @str: string to be copied
*
* Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	dup = malloc((len + 1) * sizeof(*dup));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	dup[i] = '\0';

	return (dup);
}
