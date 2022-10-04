#include "main.h"

/**
 * free_grid - frees a 2-d grid previously created by
 * the alloc_grid function
 *
 * @grid: 2-d grid
 *
 * @height: height the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
