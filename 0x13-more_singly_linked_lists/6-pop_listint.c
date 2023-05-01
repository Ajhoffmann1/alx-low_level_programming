#include "lists.h"

/**
 * pop_listint - the h nodes are deleted
 * @h: the opening element is taken by a pointer
 * Return: the total aggregate inside the elements are deleted,
 * 0 if there isnt anything in the list
 */
int pop_listint(listint_t *h)
{
	listint_t *interim;
	int total;

	if (!h || !*h)
		return (0);
	total = (*h)->n;
	interim = (*h)->next;
	free(*h);
	*h = interim;
	return (total);
}
