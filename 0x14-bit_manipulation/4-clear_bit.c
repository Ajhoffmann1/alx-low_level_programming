#include "main.h"

/**
 * clear_bit - a set to a given bit to 0 from the value of a bit
 * @n: a pointer to substitute the number to
 * @index: the bit is cleared by an index
 *
 * Return: 1 success, -1 fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
