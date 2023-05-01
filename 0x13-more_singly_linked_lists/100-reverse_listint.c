#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - the linked list has an reverse elements
 * @h: the opening nodes has a pointer
 * Return: the opening node takes the begining
 */

listint_t *reverse_listint(listint_t **h)
{
	listint_t *begin = NULL;
	listint_t *next = NULL;

	while (*h)
	{
		next = (*h)->next;
		(*h)->next = begin;
		begin = *h;
		*h = next;
	}
	*h = begin;
	return (*h);
}
