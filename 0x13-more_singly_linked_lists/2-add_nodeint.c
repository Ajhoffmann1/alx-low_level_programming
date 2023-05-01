#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - the nodes are increased at the begining
 * @h: the address is sent to the first node by the pointer
 * @n: the new node is tranfered by a data
 *
 * Return: The pointer is been analysed if the Null fails
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *begin;

	begin = malloc(sizeof(listint_t));
	if (!begin)
		return (NULL);
	begin->n = n;
	begin->next = *h;
	*h = begin;
	return (begin);
}
