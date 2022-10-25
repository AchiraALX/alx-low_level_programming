#include <stdio.h>
#include <unistd.h>

/**
 * start_up - printing before main execution
 * 
 * Return: void
*/

void start_up(void) __attribute__((constructor));

void start_up(void)
{
	printf("The monkey before the crocodile....");
}

int main(void)
{
	printf("Now it is my time, crocodile time.");
	printf("No escaping..");

	return (0);
}