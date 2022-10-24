#include "head.h"

int main(void)
{
	int array[5] = { 3, 6, 2, 7, 6 };
	int mf = -1, maxCount = 0, i , j;

	for (i = 0; i < 5; ++i)
	{
		int count;

		count = 0;

		for (j = i + 1; j < 5; ++j)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}

		if (count > maxCount)
		{
			maxCount = count + 1;
			mf = array[i];
		}
	}

	printf("Most frequent: %d occurring %d times.\n", mf, maxCount);
}