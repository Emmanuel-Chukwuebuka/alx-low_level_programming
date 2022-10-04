#include "main.h"

/**
 * free_grid - free two dimensional array
 * @grid: memory to free
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
