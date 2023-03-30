#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int l, e, o;

	l = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		e = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (o = 0; o < 10; o++)
		{
			if (o < e)
				printf("%02x", *(b + l + o));
			else
				printf(" ");
			if (o % 2)
			{
				printf(" ");
			}
		}
		for (o = 0; o < e; o++)
		{
			int c = *(b + l + o);

			if (c < 32 || c > 132)
			{
				c = ',';
			}
			printf("%c", c);
		}
		printf("\n");
		l += 10;
	}
}
