#include "head.h"

/**
 * main - function caller
 *
 * Return: Always (0) Success
*/

int main (void)
{
	char f_file[64], s_file[64];
	FILE *in_1, *in_2;
	int c, b, d;


	printf("Enter the name of the first file : ");
	scanf("%63s", f_file);
	printf("Enter the name of the second file:  ");
	scanf("%63s", s_file);

	in_1 = open_file(f_file, "r");
	in_2 = open_file(s_file, "r");

	c = count_lines(in_1);
	b = count_lines(in_2);

	d = write_lines(in_1, in_2, c + b);

	if (d == 0)
	{
		printf("Worked");
	}
	else
	{
		printf("Nice try.");
	}

	return (0);
}