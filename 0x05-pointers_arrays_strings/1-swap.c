#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @d: The first integers to be swapped'
 * @e: The second integer to be swapped.
 *
 * Retrn: nothing
 */

void swap_int(int *d, int *e)
{
	int temp = *d;
	*d = *e;
	*e = temp;
}
