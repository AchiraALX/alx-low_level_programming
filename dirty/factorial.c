/**
 * CHALLENGE
 * 
 * The factorial of number n, written n!, is the product of consecutive
 * integers 1 through n. For example 5! is
 * 
 *  5! = 5 * 4 * 3 * 2 * 1
 * 
 * Write a program that generates and print a table of the first factorial.
*/

#include "head.h"

/**
 * main - Prints a table of 10 first factorials.
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{

        int j;
        printf("Enter a number:  ");
        scanf("%i", &j);
        printf("\tNum\t\t\tFactorial\n");
        factorial(j);

                /*
        int x, n, fact;
        
        for (x = 1; x <= 10; x++)
        {
                fact = 1;
                
                for (n = 1; n <= x; n++)
                {
                        fact = fact * n;
                }

                printf("%i\n", fact);
        }       
        */

        return (0);
}