#include "head.h"

/**
 * main - the const
 *
 * const values can not be changed
 */

int main(void)
{
	int i =3, j = 7;

	const int *p = &i;

	p = &j;

	int * const ip = &i;

	// const int * const ip = &i;

	return (0);
}