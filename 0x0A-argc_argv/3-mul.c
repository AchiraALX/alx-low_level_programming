#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc != 3)
	{
		printf("Error while getting the product");
	}
	else
	{
		i = atoi(argv[i]);
		j = atoi(argv[j]);
		product = i * j;
		printf("%d\n", product);
	}

	return (0);
}
