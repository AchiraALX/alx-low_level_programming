#include "main.h"

/**
 * _malloc_demo - demo of using malloc
 *
 * Return: Average
 */

int _malloc_demo(void)
{
	int *nums;
	int len = 5;
	int avg = 0, i;

	nums = (int *)malloc(sizeof(int) * len);

	if (!nums) return (-1);

	nums[0] = 2;
	nums[1] = 4;
	nums[2] = 5;
	nums[3] = 6;
	nums[4] = 9;
	
	for (i = 0; i < len; i++)
	{
		avg += nums[i];
	}

	avg /= len;

	free(nums);

	return avg;

}

int main(void)
{
	int avg = _malloc_demo();
	printf("%d\n", avg);

	return (0);
}
