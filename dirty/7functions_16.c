#include "head.h"
/**
 * auto_static - demonstrates automatic and static variables
 *
 * Return: void
 */
void auto_static(void)
{
	int auto_var = 1;
	static int  static_var = 1;

	printf("automatic = %i, static = %i\n", auto_var, static_var);

	++auto_var;
	++static_var;
}
/**
 * main - calls the auto_static function
 *
 * @return - 0 if Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 5; ++i)
	{
		auto_static();
	}

	return  (0);
}
