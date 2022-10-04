#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * the alloc_grid function
 * 
 * @grid: 2 dimensional grid
 * 
 * @height: height of the grid
 * 
 * Return: void
 */

void free_grid(int **grid, int height)
{
    int i;

    /* free the memory allocated for the columns */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* free the memory allocated for the rows */
    free(grid);
}