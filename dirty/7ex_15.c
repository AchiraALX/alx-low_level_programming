/**
 * CHALLENGE
 *
 * Modify 7functions_15.c program so that a user is
 * prompted again to enter the base whenever the user
 * enter a wrong base
 */

 #include "head.h"

 /**
  * main - main function
  *
  * Return: Always (0) Success
  */

  int main(void)
  {
	  get_number_and_base();
	  convert_number();
	  display_converted_number();

	  return (0);
  }
