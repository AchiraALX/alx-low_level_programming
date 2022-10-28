#include "head.h"

/**
 * main - size_t demo or any unsigned
 * int type should be used 
 * carefully when use in a loop
 * 
 * Return: Always (0) Success
*/

size_t name(void);
size_t size1(void);

int main(void)
{
	int a[N];
	size_t n, s;

	for (n = 0; n < N; ++n)
	{
		a[n] = 1;
		printf("%d\n", a[n]);
	}

	name();

	s = size1();

	printf("My size is %zu", s);

	return (0);
}

size_t name(void)
{
	size_t i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d\n", i);
	}

	return (i);
}

size_t size1(void)
{
	size_t arr[10], sized, s_z;

	for (sized = 0; sized < 10; ++sized)
	{
		arr[sized] = sized;
		printf("%d\n", arr[sized]);
	}

	s_z = sizeof(arr);

	return s_z;
}