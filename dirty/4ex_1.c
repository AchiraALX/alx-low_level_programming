/**
 * CHALLENGE
 * 
 * Write a program that prints the values n and n**2 
 * for integer values of n ranging from 1 to 10.
*/

#include "head.h"

/**
 * main - find the squares of integers
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int n, counter;

        printf("Enter a number: ");
        scanf("%i", &n);

        printf("\tNum.\t\t\tNum*Num\n");

        for (counter = 1; counter <= n; counter++)
        {
                printf("\t %i\t\t\t  %i\n", counter, counter * counter);
        }

        return (0);
}