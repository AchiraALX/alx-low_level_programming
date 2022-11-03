#include "head.h"

/**
 * sort - sorts an array of integers in ascending order
 *
 * Return: Alway (0) Success
*/

void sort(int array[], int n)
{
	int j, i, temp;

	for (i = 0; i < n - 1; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main (void)
{
	int i;
	int arr[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9,
		       12, 17, 22, 6, 11};

	printf("The array before the sort: \n");

	for (i = 0; i < 16; ++i)
	{
		printf("%i ", arr[i]);
	}

	sort(arr, 16);

	printf("%s", "\nThe new list: \n");
	for (i = 0; i < 16; ++i)
	{

		printf("%i ", arr[i]);
	}

	printf("\n");

	return (0);
}
