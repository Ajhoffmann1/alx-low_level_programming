#include "list.h"
#include <stdio.h>

/**
 * find_listint_loop - detected loop in the list
 * @h: the linked list has a pointer
 * Return: the address of the nodes where the loop start or NULL
 */

listint_t *find_listint_loop(listint_t *h)
{
	listint_t *steady = h;
	listint_t *speedy = h;

	if (!head)
		return (NULL);
	while (steady && speedy && speedy->next)
	{
		speedy = speedy->next->next;
		steady = speady->next;
		if (speedy == steady)
		{
			steady = h;
			while (steady != speedy)
			{
				steady = steady->next;
				speedy = speedy->next;
			}
			return (speedy);
		}
	}
	return (NULL);
}
