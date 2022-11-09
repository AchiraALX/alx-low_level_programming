/**
 * CHALLENGE
 *
 * Write a function that finds an lcm of
 * two positive integers
 */

#include "head.h"

 /**
  * main - main function
  *
  * Return: Always (0) Success
  */

  int main(void)
  {
    int set_x, set_y;

    printf("%s", "Enter n number : ");
    scanf("%i", &set_x);
    printf("%s", "Enter n second number : ");
    scanf("%i", &set_y);

    int my_9z;
    my_9z = lcm(set_x, set_y);

    printf("%i\n", my_9z);

    return (0);
  }
