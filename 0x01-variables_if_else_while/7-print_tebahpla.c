#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entering point
 *
 * Return: just lower 
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
