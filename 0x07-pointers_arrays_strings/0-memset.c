#include "main.h"

/**
 * _memeset - Entry point
 * @s: pointed destination
 * @b: constant bytes
 * @n: bytes
 * Return: just 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
