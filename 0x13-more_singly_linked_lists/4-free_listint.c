#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free the list linked
 * @h: The listint_t list is to be freed at the pointer
 */
void free_listint(listint_t *h)
{
	listint_t *interim;

	while (h)
	{
		interim = h->next;
		free(h);
		h = interim;
	}
}
