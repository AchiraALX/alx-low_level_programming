#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char __putchar[] = "_putchar";
	int i = 0;

	while (__putchar[i] != '\0')
	{
		_putchar(__putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
