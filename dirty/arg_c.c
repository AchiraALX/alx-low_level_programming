#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

int main (int ac, char **av)
{
	/* it simply prints the argument passed without using the argument count*/
	int set_index = 0;
	while (av[set_index])
	{
		printf("%s\n", av[set_index]);
		++set_index;
	}

	return (0);
}