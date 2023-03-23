#include "main.h"

/**
 * print_line - Draw straight line according to parameter
 * @n: The number of lines to draw
 * Return:empty
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
