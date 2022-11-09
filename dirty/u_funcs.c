#include "head.h"

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
 * gcd - computes the greatest common divisor of two arbitrary numbers.
 *
 * Return: gcd (u)
*/

int u_gcd(int u, int v)
{
	int temp;

	if (u == 0 || v == 0)
	{
		return 0;
	}
	else if (u < 0 || v < 0)
	{
		printf("ERROR.Couldn't find gcd of a -ve NO.\n");
		exit (1);
	}
	else
	{
		while (v != 0)
		{
			temp = u % v;
			u = v;
			v = temp;
		}

		return u;
	}
}

/**
 * lcm - calculates the lcm of two integers
 *
 * @set_x: first integer
 *
 * @set_y: second integer
 *
 * Return: lcm
 */

 int lcm(int set_x, int set_y)
 {

   if (set_x == 0 || set_y == 0)
   {
   	printf("\n%s\n", "Either of the numbers is zero");
	return (0);
   }

   int set_z;

   set_z = mult(set_x, set_y) / u_gcd(set_x, set_y);

   return (set_z);
 }

 /**
  * absolute_value - gets the absolute value of a number
  *
  * Return: absolute value
  */

  double absolute_value(float set_x)
  {
	  if (set_x < 0)
	  {
		  set_x = -set_x;
	  }

	  return (set_x);
  }

 /**
  * square_root - gets the square root of a number set_z
  *
  * Return: the root of a number
  */

  double square_root(float set_x)
  {
	  const float epsilon = .00001;
	  float guess = 1.0;

	  if (set_x < 0)
	  {
		  printf("%s\n", "You cannot find a root of a negative number");
		  return (1.0);
	  }

	  do
	  {
		  guess = (set_x / guess + guess) / 2.0;

	  } while (absolute_value(1.0 - square(guess) / set_x) >= epsilon);

	  return (guess);

  }
  /**
   * quadratic_roots - finds the root of a quadratic
   * expression
   *
   * @set_a: the value of a
   *
   * @set_b: the value of b
   *
   * @set_c: the value of b
   *
   * Return: two roots
   */

   double quadratic_roots(int set_a, int set_b, int set_c)
   {
	   double set_r;

	   if ( ((set_b * set_b) - (4 *set_a * set_c)) < 0 ) {
	   	printf("%s\n", "Roots are imaginary numbers.");
		return (1.0);
	   }

	   set_r = (-(set_b) + square_root((set_b * set_b) - (4 * set_a * set_c))) / (2.0 * set_a);

	   return (set_r);

   }

   /**
    * negative - negates a value x
    *
    * @set_x: value to be negated
    *
    * Return: negative
    */

    double negative_x(double set_x)
    {
	    set_x = -set_x;

	    return set_x;
    }

/**
 * prime - checks if a number is prime
 *
 * @set_x: integer to check
 *
 * Return: 1 if the number is prime
 * otherwise 0
 */

 int prime(int set_x)
 {
	 size_t set_prime;

	 if (set_x < 2)
	 {
	 	printf("\n%s\n", "2 is the least prime number");
		return (-1);
	 }

	 for (size_t i = 2; i < set_x; ++i)
	 {
		 set_prime = true;

	 	if (set_x % i == 0)
		{
			set_prime = false;
			return (0);
		}
	 }

	 return (set_prime);
 }

/**
 * array_sum - gets the sum of array elements
 *
 * @set_array: array of integers
 *
 * @set_num: number of elements in the array
 *
 * Return: sum of array elements
 */

 int array_sum(int set_array[], int set_num)
 {
	 size_t i, set_sum;

	 set_sum = 0;

	 for (i = 0; i < set_num; ++i)
	 {
		 set_sum += set_array[i];
	 }

	 return (set_sum);
 }

/**
 * transpose_matrix - transforms an M[a, b] matrix
 * to N[b, a] matrix which is equal to M[a, b]
 * e.g a 5 by 4 matrix becomes a 4 * 5 matrix with
 * the same values
 *
 * @set_matrix: matrix to be transposed
 *
 * Return: transposed matrix
 */

 int transpose_matrix(int matrix[][], int set_x, int set_y)
 {
	 int i, j;

	 for (i = 0; i < set_x; ++i)
	 {
		 for (j = 0; j < set_y; ++j)
		 {
			 matrix[i][j] = matrix[j][i];
		 }
	 }

	 return (matrix);
 }
