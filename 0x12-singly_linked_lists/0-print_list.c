#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t to print
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nd;

	nd = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->str);
		h = h->next;
		nd++;
	}
	return (nd);
}
