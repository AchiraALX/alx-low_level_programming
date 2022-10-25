#include "lists.h"

/**
 * start_up - function that prints a string before the main function is executed
 *
 * Return: nothing
 */

void start_up(void) __attribute__ ((constructor));

void start_up(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
