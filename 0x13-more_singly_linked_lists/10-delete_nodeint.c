#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deleted nodes in a linked list
 * @h: the opening element has a pointer in the linked list
 * @index: the node with a element is to be deleted
 * Return: 1 (success), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	listint_t *interim = *h;
	listint_t *current = NULL;
	unsigned int l = 0;

	if (*h == NULL)
		return (-1);
	if (index == 0)
	{
		*h = (*h)->next;
		free(interim);
		return (1);
	}
	while (l < index - 1)
	{
		if (!interim || !(interim->next))
			return (-1);
		interim = interim->next;
		l++;
	}
	current = interim->next;
	interim->next = current->next;
	free(current);
	return (1);
}
