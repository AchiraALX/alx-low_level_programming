#include "unistd.h"
#include "string.h"
#include "main.h"

int main(void)
{
	char *str = "Hello World, my name is jacob";
	int i = 0;

	while (i < strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}