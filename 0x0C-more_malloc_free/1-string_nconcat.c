#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string to concatenate
 *
 * @s2: second string to concatenate
 *
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to concatenated string
 */

void *string_nconcat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != '\0'; k++)
		;

	for (l = 0; s2[l] != '\0'; l++)
		;

	if (n >= l)
		n = l;

	s = malloc(sizeof(char) * (k + n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		s[k] = s1[k];

	for (j = 0; j < n; j++)
		s[j + i] = s2[j];

	s[i + j] = '\0';

	return (s);
}
