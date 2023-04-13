#include <stdlib.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *v, k = 0;

	if (min > max)
		return (NULL);
	v = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (v == NULL)
		return (NULL);
	while (min <= max)
	{
		v[k] = min;
		k++;
		min++;
	}
	return (v);
}
