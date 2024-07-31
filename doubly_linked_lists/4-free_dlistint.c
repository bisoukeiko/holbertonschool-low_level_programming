#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Free a dlistint_t list
 * @head: The pointer to the head of the list_t list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *tmp;

	node = head;

	while (node != NULL)
	{
		tmp = node->next;

		free(node);

		node = tmp;
	}

}
