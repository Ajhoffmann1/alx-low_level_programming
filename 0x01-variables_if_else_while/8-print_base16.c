#include <stdio.h:>
#include <stdlib.h>
#include <time.h>

/**
 * main - entering point 
 *
 * Return: just 0(success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0';  d <= 'f'; d++)
	purchar(d);

	for (low = 'a'; low <= 'f'; low++)
	purchar(low);
	printf("\n");

	return (0);
}
