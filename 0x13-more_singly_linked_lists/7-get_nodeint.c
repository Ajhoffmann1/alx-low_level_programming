#include "lists.h"

/**
 * get_nodeint_at_index - the node is taken back from index level its linked
 * @h: the opening linked list with the element
 * @index: the index node is to be remited
 * Return: the node we look for at the pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int l = 0;
	listint_t *interim = h;

	while (interim && l < index)
	{
		interim = interim->next;
		l++;
	}
	return (interim ? interim : NULL);
}
