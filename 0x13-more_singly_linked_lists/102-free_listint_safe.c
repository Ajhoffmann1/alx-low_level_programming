#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - the linked is freed
 * @h: the begin nodes with a pointer
 * Return: the lists of the element to be freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t region = 0;
	int diversified;
	listint_t *interim;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diverse = *h - (*h)->next;
		if (diversified > 0)
		{
			interim = (*h)->next;
			free(*h);
			*h = interim;
			region++;
		}
		else
		{
			free(*h);
			*h = NULL;
			region++;
			break;
		}
	}
	*h = NULL;
	return (region);
}
