#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	/* executes a program and executables */
	char *new_argv[] = {NULL, "hey", "there", "welcome", NULL};
	char *new_envp[] = { NULL };

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	new_argv[0] = argv[1];

	execve(argv[1], new_argv, new_envp);
	perror("execve");
	exit(EXIT_SUCCESS);
}
