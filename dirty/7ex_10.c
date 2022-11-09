/**
 * CHALLENGE
 *
 * Write a function that returns 1 if the passed
 * argument is a prime and 0 otherwise
 */

 #include "head.h"

 /**
  * main - main function
  *
  * Return: Always (0) Success
  */

  int main (void)
  {
	  size_t set_x, set_y;

	  printf("%s", "Enter n number : ");
	  scanf("%i", &set_x);

	  set_y = set_x;
	  set_x = prime(set_x);

	  if (set_x == 1)
	  {
	  	printf("\n%i %s\n\n", set_y, "is a prime number");
	  }
	  else
	  {
		  if (set_x == -1)
		  {
		  	printf("\n%s\n\n", "ERROR");
		  }
		  else
		  {
			  printf("\n%i %s\n\n", set_y, " is not a prime number");
		  }
	  }

	  return (0);
  }
