#include "lists.h"

/**
 * pop_listint - the head nodes are deleted
 * @h: the opening element is taken by a pointer
 * Return: the total aggregate inside the elements are deleted,
 * 0 if there isnt anything in the list
 */
int pop_listint(listint_t **head)
{
	listint_t *interim;
	int total;

	if (!head || !*head)
		return (0);
	total = (*head) ->n;
	interim = (*head) ->next;
	free(*head);
	*head = interim;
	return (total);
}
