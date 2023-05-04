#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - the unsigned int has a converted binary
 * @b: a string with the pointer directed to 0 and 1 char
 *
 * Return: the converted numbers
 */

unsigned int binary_to_uint(const char *b)
{
	int leo;
	unsigned int lady = 0;

	if (!b)
		return (0);
	for (leo = 0; b[leo]; leo++)
	{
		if (b[leo] < '0' || b[leo] > '1')
			return (0);
		lady = 2 * lady + (b[leo] - '0');
	}
	return (lady);
}
