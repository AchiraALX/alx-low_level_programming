/**
 * CHALLENGE
 *
 * Write a functionn that would solve a quadratic
 * expression give  user input a, b and c
 */

 #include "head.h"

/**
 * main - main function
 *
 * Return: Always (0) success
 */

 int main(void)
 {
	 int set_a, set_b, set_c;
	 double set_r1, set_r2;

	 printf("\n\t%s\n\n", "----- WELCOME -----");
	 printf("%s", "Enter 'a' value : ");
	 scanf("%i", &set_a);
	 printf("%s", "Enter 'b' value : ");
	 scanf("%i", &set_b);
	 printf("%s", "Enter 'c' value : ");
	 scanf("%i", &set_c);

	 set_r1 = quadratic_roots(set_a, set_b, set_c);
	 set_r2 = negative_x(set_r1);

	 printf("Root 1 = %.3f\nRoot 2 = %.3f\n", set_r1, set_r2);

	 return (0);
 }
