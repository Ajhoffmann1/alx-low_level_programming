#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the element has a return of numbers from the linked lists
 * @h: type listint_t of the linked list is removed
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}
