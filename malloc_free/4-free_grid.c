#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid in alloc_grid program function
 * @grid: 2 dimensional grid
 * @height: height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{

	int index_h;

	for (index_h = 0; index_h < height; index_h++)
	{

		free(grid[index_h]);
	}

	free(grid);

}
