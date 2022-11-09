/**
 * CHALLENGE
 * 
 * Trying my curiosity
*/

#include <stdio.h>

/**
 * mult - multiplies two numbers
 *
 * @set_x: first integer
 *
 * @set_y: second integer
 *
 * Return: product
 */

int mult(int set_x, int set_y)
{
  int set_z;

  set_z = 0;

  for (size_t i = 0; i < set_y; i++)
  {
    set_z += set_x;
  }

  return set_z;
}

/**
 * square - finds the square of a number set_x
 *
 * @set_x: integer to be squared
 *
 * Return: the square
 */

int square(int set_x)
{
  int set_z;

  set_z = 0;

  for (size_t i = 0; i < set_x; i++)
  {
    set_z += set_x;
  }

  return set_z;
}

/**
 * power - finds the power of n base number raised
 * to n positive int power
 *
 * @set_x: the base
 *
 * @set_y: the power
 *
 * Return: the power
 */

long int power(int set_x, unsigned int set_y)
{

  if (set_y == 0)
  {
    return (1);
  }

  if (set_y == 1)
  {
    return set_x;
  }

  int set_y_rem = set_y % 2;
  set_y /= 2;
  long long unsigned int set_z;
  unsigned int i = 0;

  set_z = square(set_x);

  for (i = 0; i < set_y - 1; i++) {
    set_z = mult(set_z, square(set_x));
    set_z = set_z;
  }

  if (set_y_rem == 1) {
    set_z = mult(set_z, set_x);
  }

  return set_z;

}

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

int main(void)
{
  int set_x;
  unsigned int set_y;

  printf("%s", "Enter n base number : ");
  scanf("%i", &set_x);
  printf("%s", "Enter n power : ");
  scanf("%u", &set_y);

  long long unsigned int my_z = power(set_x, set_y);

  printf("%lu\n", my_z);

  return (0);
}
