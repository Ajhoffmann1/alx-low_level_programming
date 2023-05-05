#include "main.h"

/**
 * get_bit - a decimal number goes to the value of a bit
 * @n: exploration of index
 * @index: index of bit of numbers
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int amount_of_bit_values;

	if (index > 63)
		return (-1);
	amount_of_bit_values = (n >> index) & 1;
	return (amount_of_bit_values);
}
