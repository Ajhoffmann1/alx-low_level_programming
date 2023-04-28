#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked  list.
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;

		h = h->next;
	}

	return (nod);
}
