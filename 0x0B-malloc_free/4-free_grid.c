#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function
 * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int r;

	if (grid == NULL)
		free(grid);

	for (r = 0; r < height; r++)
		free(grid[r]);

	free(grid);
}
