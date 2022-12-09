#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

int main(__attribute__((unused))int argc, __attribute__((unused))char const *argv[])
{
	/* reads a line from a command line */
	char *line = NULL;
	size_t len = 0;
	long int nread;

	printf("$ ");

	nread = getline(&line, &len, stdin);
	printf("%s", line);
	printf("%ld characters were read.\n", nread);

	free(line);
	exit(EXIT_SUCCESS);

	return 0;
}
