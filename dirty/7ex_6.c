/**
 * CHALLENGE
 * 
 * Use double precision on program 7ex_6.c
*/

#include "head.h"

/**
 * absolute_value - gets the absolute value of the
 * number x
 * 
 *  Return: absolute value
*/

double absolute_value(double x)
{
        if (x < 0)
        {
                x = -x;
        }

        return (x);
}

/**
 * square_root - gets the square root of number
 * x
 * 
 * Return: square root
*/

double square_root(double x, const double epsilon)
{
        double guess = 1.0;

        if (x < 0)
        {
                printf("You can't be finding a root of a negative number\n");
                return (1.0);
        }

        do
        {
                guess = (x / guess + guess) / 2.0;

        } while (absolute_value((guess * guess) / x - 1.0) >= epsilon);

	

        return (guess);
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	printf("%.2f\n", square_root(144.0, 0.00001));
	printf("%.2f\n", square_root(9.0, 0.0001));
        printf("%.2f\n", square_root(1000000.0, 0.000001));

        printf("%.2f\n", square_root(36.0, 0.0000000001));
	printf("The program worked");

	return (0);
}
