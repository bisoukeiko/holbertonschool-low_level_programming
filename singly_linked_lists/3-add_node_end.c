#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: The pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 * Return: The address of the new element
 *         NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	char *name;
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	name = strdup(str);
	if (name == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	new->str = name;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new;
	}
	return (new);
}
