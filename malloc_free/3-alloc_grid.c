#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer to a 2 dimensional array of integers
 *         return NULL on failure
 *         NULL width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index_w;
	int index_h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (index_h = 0; index_h < height; index_h++)
	{
		grid[index_h] = malloc(sizeof(int) * width);

		if (grid[index_h] == NULL)
		{
			for (; index_h >= 0; index_h--)
			{
				free(grid[index_h]);
			}

			free(grid);
			return (NULL);
		}
		else
		{
			for (index_w = 0; index_w < width; index_w++)
			{
				grid[index_h][index_w] = 0;
			}
		}
	}

	return (grid);

}
