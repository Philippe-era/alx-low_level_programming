#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * @grid: grid to release / free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int initial;

	if (grid == NULL || height == 0)
		return;

	for (initial = 0; initial < height; initial++)
		free(grid[initial]);

	free(grid);
}

