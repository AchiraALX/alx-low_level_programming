/**
 * CHALLENGE
 * 
 * Write a program that accepts two user input integer values from the terminal
 * and test whether the first integer is evenly divisible by the second
 * and give an appropriate message at the terminal.
*/

#include "head.h"

/**
 * main - accepts two inputs from the terminal and determines
 * if the first value is evenly divisible by the second value
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        int x, y;
        printf("Enter n 2 numbers:  ");
        scanf("%i %i", &x, &y);

        if (x % y == 0)
        {
                printf("%i divides %i evenly.\n", y, x);
        }
        else if ( ! (x % y == 0))
        {
                printf("%i is not evenly divisible by %i\n", x, y);
        }
        else if (x == 0 || y == 0)
        {
                printf("Division by zero. \n")
        }
        
        
        return (0);
}