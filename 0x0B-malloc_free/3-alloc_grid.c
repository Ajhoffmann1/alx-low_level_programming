#include <stdlib.h>

/**
 * alloc_grib - ....
 * @width: ...
 * @height: ...
 * Return: ...
 */

int **alloc_grib(int width, int height)
{
	int o, p, q, r;
	int **v;

	if (width <= 0 || height <= 0)
		return (NULL);
	v = malloc(sizeof(int *) * height);
	if (v == NULL)
	{
		free(v);
		return (NULL);
	}
	for (o = 0; o < height; o++)
	{
		v[o] = malloc(sizeof(int) * width);
		if (v[o] == NULL)
		{
			for (p = o; p >= 0; p--)
			{
				free(v[p]);
			}
			free(v);
			return (NULL);
		}
	}
	for (q = 0; q < height; q++)
	{
		for (r = 0; r < width; r++)
		{
			v[q][r] = 0;
		}
	}
	return (v);
}
