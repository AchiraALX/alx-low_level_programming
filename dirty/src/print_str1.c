#include "main.h"

/**
 * print_str1 - prints a string
 *
 * @cb: callback function
 *
 * Return: void
 */

void print_str1(void (*cb) (void))
{
        cb();
}

void callback(void)
{
        printf("Hello world, Jacob Achira Obara\n");
}

int main(void)
{
        void (*ptr_function)(void) = &callback;

        print_str1(ptr_function);

        return (0);
}