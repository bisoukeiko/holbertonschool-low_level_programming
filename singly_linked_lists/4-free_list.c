#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Free a list_t list
 * @head: The pointer to the head of the list_t list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *node;
	list_t *tmp;

	node = head;

	while (node != NULL)
	{
		tmp = node->next;

		free(node->str);
		free(node);

		node = tmp;

	}

}
