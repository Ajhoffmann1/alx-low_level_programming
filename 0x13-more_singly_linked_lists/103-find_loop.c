#include "list.h"
#include <stdio.h>

/**
 * find_listint_loop - detected loop in the list
 * @head: the linked list has a pointer
 * Return: the address of the nodes where the loop start or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (low && fast && fast->next)
	{
		fast = fast->next->next;
		low = low->next;
		if (fast == low)
		{
			low = head;
			while (low != fast)
			{
				low = low->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
