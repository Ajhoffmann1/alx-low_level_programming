#include "main.h"

/**
 * times_table - a function that prints the 9 times, starting with 0
 * Return: empty output
 */

void times_table(void)
{
	int l, e, o, n, a;

	for (l = 0; l <= 9; l++)
	{
		for (e = 0; e <= 9; e++)
		{
			o = l * e;
			if (o > 9)
			{
				n = o % 10;
				a = (o - n) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(a + '0');
				_putchar(n + '0');
			}
			else
			{
				if (e != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
