#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the start of a linked
 * @head: list_t list has a dounle pointer
 * @str: the node has new stringss to be added
 *
 * Return: the element has a new address which maybe NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	unsigned int len = 0;

	while (str[len])
		len++;
	nn = malloc(sizeof(list_t));
	if (!nn)
		return (NULL);
	nn->str = strdup(str);
	nn->len = len;
	nn->next = (*head);
	(*head) = nn;
	return (*head);
}
