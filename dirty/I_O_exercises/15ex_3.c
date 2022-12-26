#include "head.h"

/**
 * main - main routine
 *
 * Return: Always (0) Success
 */

int main (void)
{
	char in_name[64], out_name[64];
	FILE *in, *out;
	int c;

	/* get the files */
	printf("Enter the name of the file to read from:  ");
	scanf("%63s", in_name);
	printf("Enter the name of the file to write to:  ");
	scanf("%63s", out_name);

	in = open_file(in_name, "r");
	out = open_file(out_name, "w");

	while ( (c = getc(in)) != EOF )
	{
		putc(low_to_upper(c), out);
	}

	printf("\n\n\tCopied %s to %s all in upper case\n\n", in_name, out_name);

	fclose(in);
	fclose(out);

	return (0);
}
