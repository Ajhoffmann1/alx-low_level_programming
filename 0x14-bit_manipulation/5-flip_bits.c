#include "main.h"

/**
 * flip_bits - bits subtituted with the check number from one number to other
 * @n: number start
 * @m: number ends
 * Return: the bits to be changed by the number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, rounder = 0;
	unsigned long int previous;
	unsigned long int ex = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		previous = ex >> l;
		if (previous & 1)
			rounder++;
	}
	return (rounder);
}
