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
  * transpose_matrix - transpose a matrix
  *
  * @matrix: matrix to be transposed
  *
  * Return: void
  */

  void transpose_matrix(int row, int cols, int matrix[row][cols])
  {
	  size_t i, j;
	  int row_to_col[5][4];

	  for (i = 0; i < cols; ++i)
	  {
		  for (j = 0; j < row; ++j)
		  {
			  row_to_col[i][j] = matrix[j][i];
		  }
	  }

	  for (i = 0; i < 5; ++i)
	  {
		  for (j = 0; j < 4; ++j)
		  {
		  	 printf("%i ", row_to_col[i][j]);
		  }

		  printf("\n");
	  }
  }

  /**
   * sort - sorts an array of integers in ascending order
   *
   * Return: Alway (0) Success
  */

  void sort(int set_array[], int set_n, int set_a)
  {
  	int j, i, temp;

  	for (i = 0; i < set_n - 1; ++i)
  	{
  		for (j = i + 1; j < set_n; ++j)
  		{
  			if (set_a < 0)
			{
				if (set_array[i] < set_array[j])
	  			{
	  				temp = set_array[j];
	  				set_array[j] = set_array[i];
	  				set_array[i] = temp;
	  			}
  			}
			else
			{
				if (set_a >= 0)
				{
					if (set_array[i] > set_array[j])
		  			{
		  				temp = set_array[j];
		  				set_array[j] = set_array[i];
		  				set_array[i] = temp;
		  			}
				}
			}
  		}
  	}
  }


  /* GLOBAL VARIABLES */

  int converted_number[64];
  long int number_to_convert;
  int base;
  int digit = 0;

  /**
   * get_number_and_base - get the number to be converted and the
   * base to be converted to from the user
   *
   * Return: void
   */

  void get_number_and_base(void)
  {
  	printf("%s\n", "Enter n number : ");
  	scanf("%li", &number_to_convert);

	do
	{
	  	printf("%s\n", "Enter base to convert to (2 - 16)");
	  	scanf("%i", &base);

	} while (base < 2 || base > 16);

  	if (base < 2 || base > 16)
  	{
  		printf("%s\n", "Bad base - enter a number between 2 and 16");
  		base = 10;
  	}
  }

  /**
   * convert_number - does calculation of changing the base
   *
   * Return: void
   */

  void convert_number(void)
  {
  	do
  	{
  		converted_number[digit] = number_to_convert % base;
  		++digit;
  		number_to_convert /= base;
  	} while (number_to_convert != 0);
  }

  /**
   * display_converted_number - displays the converted number in the
   * correct sequence
   *
   * Return: void
   */

  void display_converted_number(void)
  {
  	const char base_digits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

  	int next_digit;
  	printf("%s", "Converted number = ");
  	for (--digit; digit >= 0; --digit)
  	{
  		next_digit = converted_number[digit];
  		printf("%c", base_digits[next_digit]);
  	}

  	printf("\n");
  }

  /**
   * d_check - check if subtraction is possible between dates
   *
   * @n: initial date
   *
   * @t: date then
   *
   * Return: true if subtraction is possible, else False
   */

  bool d_check (struct date n, struct date t)
  {
  	if (t.year - n.year < 0)
  	{
  		return false;
  	}
  	else
  	{
  		if (n.month > t.month && t.year <= n.year)
  		{
  			return false;
  		}
  		else
  		{
  			if (n.day > t.day && n.month >= t.month && t.year <= n.year)
  			{
  				return false;
  			}
  			else
  			{
  				return true;
  			}
  		}
  	}
  }

  /**
   * day_difference - calculate number of days between dates
   *
   * @d_now: initial date
   *
   * @d_then: date to calculate to
   *
   * Return: number of days
   */

   int day_difference(struct date d_now, struct date d_then)
   {
	int init_day, days;

  	if (d_check(d_now, d_then))
  	{
  		if (d_then.year - d_now.year > 0) {
  			init_day = number_of_days(d_now) - d_now.day;
  			days = 0;
  			for (i = d_now.month + 1; i <= 12; ++i)
  			{
  				d_now.month += 1;
  				days += number_of_days(d_now);
  			}

  			days += init_day;

  			if (d_then.year != d_now.year)
  			{
  				for (i = d_then.month - 1; i > 0; --i)
  				{
  					d_then.month -= 1;
  					days += number_of_days(d_then);
  				}

  				days += d_then.day;
  			}

  			if (d_then.year - d_now.year > 1)
  			{
  				for (i = d_now.year + 1; i < d_then.year; ++i)
  				{
  					d_now.year += 1;
  					if (is_leap_year(d_now)) {
  						days += 366;
  					}
  					else
  					{
  						days += 365;
  					}
  				}
  			}
  		}
  		else
  		{
  			init_day = number_of_days(d_now) - d_now.day;
  			days = 0;
  			for (i = d_now.month + 1; i < d_then.month; ++i)
  			{
  				d_now.month += 1;
  				days += number_of_days(d_now);
  			}

  			days += init_day;
  		}
  	}
  	else
  	{
  		printf("False");
  	}

	return days;
}

/**
 * date_check - validates the dates
 *
 * @date: struct date type
 *
 * Return: bool
 */

 bool date_check (struct date d_t)
 {
	 if (d_t.day > 31)
	 {
		 printf("%s\n", "ERROR. ", d_t.month, d_t.year);
		 return false;
	 }
	 else
	 {
		 return true;
	 }
 }

/**
 * date - get the dates for calculation
 *
 * Return: date struct
 */

 struct date dates(void)
 {
	 struct date d_t;
	 printf("%s", "Enter n date (mm - dd - yyyy) : ");
	 scanf("%i - %i - %i", d_t.month, d_t.day, d_t.year);

	 return d_t;
 }
