#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - frees memory in the grid
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		exit(98);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
