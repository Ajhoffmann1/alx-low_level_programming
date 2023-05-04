#include "main.h"
/**
 * print_binary - equivalent of decimal number that inscript
 * @n: the total number of binary number to be inscripted
 */

void print_binary(unsigned long int n)
{
	int lady, mary = 0;
	unsigned long int new;

	for (lady = 63; mary >= 0; mary--)
	{
		new = n >> mary;
		if (new & 1)
		{
			_putchar('1');
			mary++;
		}
		else if (new)
		{
			_putchar('1');
			mary++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
