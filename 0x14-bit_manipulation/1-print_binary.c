#include "main.h"

/**
 * print_binary - a similar demical number that inscript binary
 * @n: the unscrpited binary number
 */

void print_binary(unsigned long int n)
{
	int leidy, lady = 0;
	unsigned long int new;

	for (leidy = 63; leidy >= 0; leidy--)
	{
		new = n >> leiady;
		if (new & 1)
		{
			_putchar('1');
			lady++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
