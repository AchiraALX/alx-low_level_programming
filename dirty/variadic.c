#include "head.h"

/**
 * print all args one at a time until a negative
 * argument is seen
 * 
 * All args are assumed to ben of int type
*/

void print_args(int args1, ...)
{
    va_list ap;
    int i;

    va_start(ap, args1);
    for (i = args1; i >= 0; i = va_arg(ap, int))
    {
        printf("%d ", i);
    }

    va_end(ap);
    putchar('\n');
}

int main(void)
{
    print_args(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1);
    print_args(84, 51, -1, 3);
    print_args(-1);
    print_args(1, -1);

    return (0);
}