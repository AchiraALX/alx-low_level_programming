#include "head.h"

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 struct time current_time, next_time;

	 printf("%s", "Enter n time now (hh:mm:ss) : ");
	 scanf("%i:%i:%i", &current_time.hour, &current_time.minutes, &current_time.seconds);

	 next_time = time_update(current_time);

	 printf("%s %.2i:%.2i:%.2i\n", "Next time is ", next_time.hour, next_time.minutes, next_time.seconds);

	 return (0);
 }
