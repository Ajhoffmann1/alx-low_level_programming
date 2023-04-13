#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int o = 0, p = 0;
	char *v;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = nmemb * size;
	v = malloc(p);
	if (v == NULL)
		return (NULL);
	while (o < p)
	{
		v[o] = 0;
		o++;
	}
	return (v);
}
