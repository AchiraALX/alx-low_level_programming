#include "main.h"

int sum_all(int n, ...)
{
	int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}

int main(void)
{
	int sum = 0;

	sum = sum_all(5, 1, 2, 3, 4, 5, 40);

	printf("The sum is : %d\n", sum);

	return (0);
}
