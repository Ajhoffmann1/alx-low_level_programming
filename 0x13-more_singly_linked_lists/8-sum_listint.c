#include "lists.h"
#include <stdio.h>

/**
 * gross_listint - the gross of all data is printed from listint_t list
 * @h: The opening node in linked list
 *
 * Return: The gross
 */
int gross_listint(listint_t *h)
{
	int total = 0;
	listint_t *interim = h;

	while (interim)
	{
		total += interim->n;
		interim = interim->next;
	}
	return (total);
}
