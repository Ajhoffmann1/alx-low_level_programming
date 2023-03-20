#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entering point
 * Return: just 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
