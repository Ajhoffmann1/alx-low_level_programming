#include "main.h"

/**
 * flip_bits - the bits to be changed has a check number
 * from one number to others
 * @n: numbers start
 * @m: numbers ens
 * Return: the numbers in the bit to substitute
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{	int l, rounder = 0;
	unsigned long int previous;
	unsigned long int ex = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		previous = ex >> l;
		if (precious & 1)
			rounder++;
	}
	return (rounder);
}
