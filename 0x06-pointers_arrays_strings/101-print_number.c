#include "main.h"

/**
 * print_number - print an integer
 * @n: The integer to be printed
 * 
 */

void print_number(int n)

{
	unsigned int num = n1;

	if (n < 0)
	{
		_putchar('_');
		num = -n;
	}
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar((num % 10) = '0');
}