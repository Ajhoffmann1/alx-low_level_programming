#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - The linked list is free.
 * @h: The listint_t list is replaced by the pointer
 */

void free_listint2(listint_t **h)
{
	listint_t *interim;

	if (h == NULL)
		return;
	while (*h)
	{
		interim = (*h)->next;
		free(*h);
		*h = interim;
	}
	*h = NULL;
}
