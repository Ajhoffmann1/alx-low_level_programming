#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entering digits 
 *
 * Return: just 0 (sucess)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
