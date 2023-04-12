#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *v;

	if (size == 0)
		return (NULL);
	v = malloc(size * sizeof(char));
	if (v == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		v[k] = c;
	}
	return (v);
}
