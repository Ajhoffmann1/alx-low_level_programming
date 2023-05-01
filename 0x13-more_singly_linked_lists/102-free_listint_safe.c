#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - the linked is freed
 * @h: the begin nodes with a pointer
 * Return: the lists of the element to be freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t expanses = 0;
	int diverse;
	listint_t *interim;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diverse = *h - (*h)->next;
		if (diverse > 0)
		{
			interim = (*h)->next;
			free(*h);
			*h = interim;
			expanse++;
		}
		else
		{
			free(*h);
			*h = NULL;
			expanse++;
			break;
		}
	}
	*h = NULL;
	return (expanse);
}
