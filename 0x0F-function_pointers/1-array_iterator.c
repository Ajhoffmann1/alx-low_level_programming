#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array elem on a new1
 * @array: array
 * @size: how many elem to print
 * @action: how many elem to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
