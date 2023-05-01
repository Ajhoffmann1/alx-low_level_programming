#include "lists.h"
#include <stdio.h>

/**
 * print_listint - all linked lists will be printed from the elements
 * @h: type listint_t to be printed directed to the pointer from the link list
 * Return: total nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}
	return (total);
}
