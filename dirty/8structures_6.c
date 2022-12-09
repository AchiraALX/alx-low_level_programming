#include "head.h"

/**
 * main - illustrate array of structures
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 struct time test_times[5] = {
		 {11, 59, 59}, {12, 0, 0}, {1, 29, 59}, {23, 59, 59}, {19, 12, 27}
	 };

	 size_t i;

	 for (i = 0; i < 5; ++i)
	 {
		 printf("%s %.2i:%.2i:%.2i\n", "Time is ", test_times[i].hour, test_times[i].minutes, test_times[i].seconds);

		 test_times[i] = time_update (test_times[i]);

		 printf("%s %.2i:%.2i:%.2i\n", "...one second later it's ", test_times[i].hour, test_times[i].minutes, test_times[i].seconds);
	 }

	 return (0);
 }
