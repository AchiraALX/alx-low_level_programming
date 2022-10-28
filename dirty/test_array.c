#include "head.h"

/**
 * main - main function
 * 
 * Return: Always (0) success
*/

int main(void)
{
	int i, j;

	printf("Enter n number:  ");
	scanf("%i", &j);

	int array[j];

	for (i = 0; i <= j; ++i)
	{
		array[i] = i + 10;
		printf("I am %i\n", array[i]);
		i = array[i];
	}

	free(array);

	printf("%d\n", sizeof(array)/sizeof(array[0]) - 1);
	for (i = 0; i < 100; i++)
	{
		printf("%i\n", array[i]);
	}

	return (0);
}