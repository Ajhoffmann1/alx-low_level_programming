#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a code that prints a randon numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(tine(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

