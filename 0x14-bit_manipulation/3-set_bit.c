#include "main.h"

/**
 * set_bit - identified index sets a bit 1
 * @n: the pointer to change a number
 * @index: the set a bit 1 at an index
 * Return: 1 success, -1 fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
