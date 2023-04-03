#include "main.h"

/**
 * _memset - Entry point
 * #dest: input of a destination
 * @src: input of the source code
 * @n: input the number of the integer
 * Return: just 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
