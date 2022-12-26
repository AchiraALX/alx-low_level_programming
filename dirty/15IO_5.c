#include <stdio.h>
#include <stddef.h>

/**
 * main - copies a file
 *
 * Return: Always (0) Success
 */

int main (void)
{
	char in_name[64], out_name[64];
	FILE *in, *out;
	int c;

	/*Get file name from the user */
	printf("Enter name of the file to be copied:  ");
	scanf("%63s", in_name);
	printf("Enter the output file name:  ");
	scanf("%63s", out_name);

	/* open files */
	if( (in = fopen(in_name, "r")) == NULL)
	{
		printf("Can't open %s file for reading\n", in_name);
	}

	if ( (out = fopen(out_name, "w")) == NULL)
	{
		printf("Can't open %s file for writing\n", out_name);
	}

	/* copy file */
	while ( (c = getc(in)) != EOF)
	{
		putc(c, out);
	}

	fclose(in);
	fclose(out);

	printf("File copied %i \n", EOF);

	return (0);

}
