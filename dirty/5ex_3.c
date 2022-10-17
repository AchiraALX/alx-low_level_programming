/**
 * CHALLENGE
 * 
 * Write a program that takes in two integer values typed by the user
 * and display the result of dividing first integer by the second
 * to three decimal place of accuracy. Check division by zero.
*/

#include "head.h"

/**
 * main - divides two integer inputs and displays the result
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        float x, y, z;

        printf("Enter n 2 numbers:  ");
        scanf("%f %f", &x, &y);

        if (x == 0 || y == 0)
        {
                printf("Division by zero.");
        }
        else
        {
                z = x / y;
                printf("%.3f divided by %.3f is equal to %.3f\n", x, y, z);
        }

        return (0);
}