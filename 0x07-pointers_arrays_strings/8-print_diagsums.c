#include "main.h"
#include <stdio.h>

/**
 * print_diadonal - Entry point
 * @a: input
 * @size: input
 * Return: just (success)
 */

void print_diagsums(int *a, int size)
{
	int k, n, prol = 0, pro2 = 0;

	for  (k = 0; k <= (size * size); k = k + size + 1)
		prol = prol + a[k];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		pro2 = pro2 + a[n];
	printf("%d, %d\n", pro1, pro2);
}
