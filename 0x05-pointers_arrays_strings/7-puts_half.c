#include "main.h"
/**
 * puts_half - print half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int l, o = 0;

	while (str[o] != '\0')
	{
		o++;
	}
	if (o % 2 == 1)
	{
		l = (o - 1) / 2;
		l += 1;
	}
	else
	{
		l = o / 2;
	}
	for (; l < o; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
