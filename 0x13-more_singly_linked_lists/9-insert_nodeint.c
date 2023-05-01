#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - replace fresh node in the linked list,
 * in the accurate points
 * @h: opeing node to take a pointer
 * @index: the current nodes are added
 * @n: the current node get an opening element to added
 * Return: The current node is taken by a pointer or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
	unsigned int l;
	listint_t *begin;
	listint_t *interim = *h;

	begin = malloc(sizeof(listint_t));
	if (!begin || !h)
		return (NULL);
	begin->n = n;
	begin->next = NULL;
	if (index == 0)
	{
		begin->next = *h;
		*h = begin;
		return (begin);
	}
	for (l = 0; interim && l < index; l++)
	{
		if (l == index - 1)
		{
			begin->next = interim->next;
			begin->next = begin;
			return (begin);
		}
		else
			interim = interim->next;
	}
	return (NULL);
}
