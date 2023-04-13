#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realiloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 * Return: ..
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pptr;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		pptr = malloc(new_size);
		if (pptr == NULL)
			return (NULL);
		return (pptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	pptr = malloc(new_size);
	if (pptr == NULL)
		return (NULL);
	for (k = 0; k < old_size && k < new_size; k++)
	{
		pptr[k] = ((char *) ptr) [k];
	}
	free(ptr);
	return (pptr);
}
