#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *h);
size_t print_listint_list(const listint_t *h);

/**
 * looped_listint_len - the individual nodes has a specific number
 * for the looped the linked list.
 * @h: the begining of the listint_t has a pointer to caculate
 * Return: examine if the list is not looped - 0.
 * Otherwise - seperate node in the list with element.
 */

size_t looped_listint_len(const listint_t *h)
{
	const listint_t *cooter, *creep;
	size_t l = 1;

	if (h == NULL || h->next == NULL)
		return (0);
	cooter = h->next;
	creep = (h->next)->next;
	while (creep)
	{
		if (cooter == creep)
		{
			cooter = h;
			while (cooter != creep)
			{
				l++;
				cooter = cooter->next;
				creep = creep->next;
			}
			cooter = cooter->next;
			while (cooter != creep)
			{
				l++;
				cooter = cooter->next;
			}
			return (l);
		}
		cooter = cooter->next;
		creep = (creep->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - The listint_t list freely with output
 * @h: the begining listint_t list takes the pointer
 * Return: the elements of nodes are returned
 */

size_t print_listint_safe(const listint_t *head)

	size_t knots, k = 0;

	knots = looped_listint_len(head);
	if (knots == 0)
{
	for (; head != NULL; knots++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		h = h->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
}
return (knots);
