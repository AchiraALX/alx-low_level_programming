/**
 * CHALLENGE
 * 
 * Write a program that calculates the average of an array
 * of 10 floating point values.
*/

#include "head.h"

/**
 * main - function caller
 * 
 * Return: sum for average calculation
*/

float sm(float sum, float x);
float av(float t_sum, float t_num);

int main(void)
{
	float ave[10], num, sum;
	int i;

	printf("%s", "Enter n numbers:   \n\n");

	sum = 0.0;
	i = 0;

	do
	{
		scanf("%f", &num);
		ave[i] = num;
		sum = sm(sum, ave[i]);
		i += 1;

	} while (i < 10);

	printf("%s", "The average is :  ");
	printf("%.3f", av(sum, i));

	return (0);
}

/**
 * sm - sums two numbers
 * 
 * Return: sum
*/

float sm(float sum, float x)
{
	return sum + x;
}

/**
 * av - averages two numbers
 * 
 * Return: average
*/

float av(float t_sum, float t_num)
{
	return t_sum / t_num;
}