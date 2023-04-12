#include <stdlib.h>

/**
 * free_grib - ...
 * @grid: ...
 * @height: ...
 * Return: ...
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
