#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - nodes are added at the end of the linked list
 * @h: the inital elements are to be taken by a pointer
 * @n: Elements to inlay
 *
 * Return: the pointer is examines the new node if the NULL fails
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *begin;
	listint_t *novel = *h;

	begin = malloc(sizeof(listint_t));
	if (!begin)
		return (NULL);
	begin->n = n;
	begin->next = NULL;
	if (*h == NULL)
	{
		*h = begin;
		return (begin);
	}
	while (novel->next)
		novel = novel->next;
	novel->next = begin;
	return (begin);
}
