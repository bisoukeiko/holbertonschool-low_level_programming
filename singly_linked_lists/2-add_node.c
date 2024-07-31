#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list
 * @head: The pointer to the head of the list_t list
 * @str: The string to be added to the list_t list
 * Return: The address of the new node
 *         NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	unsigned int len;
	char *name;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}


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
	new->next = *head;

	*head = new;

	return (new);

}
