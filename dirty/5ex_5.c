/**
 * CHALLENGE
 * 
 * Write a program that reverses -ve numbers. 
 * Example -89 would be 98-
*/

#include "head.h"

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/
int reverse(int num);

int main(void)
{
        int number;

        printf("Enter a number:  ");
        scanf("%i", &number);

        if (number < 0)
        {
                number = abs(number);
                reverse(number);
                printf("-");
        }
        else
        {
                reverse(number);
        }

        return (0);
}

/**
 * reverse - reverses an integer
 * 
 * Return: void
*/

int reverse(int num)
{
        do
        {
                printf("%i", num % 10);
                num /= 10;

        } while (num != 0);

        return (0);
}