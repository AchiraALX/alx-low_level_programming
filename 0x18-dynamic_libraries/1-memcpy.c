#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: char pointer to copy into
 * @src: char array to copy from
 * @n: number of elements to be copied
 * Return: pointer to "dest"
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *game;

	game = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (game);
}
