#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: 2-dimensional grid
 * @height: Height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
