#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 * @head: The pointer to the address of head of list_t list
 * @n : The number
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;
	dlistint_t *tmp;

	tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;

	if (tmp != NULL)
	{
		while (tmp->prev != NULL)
		{
			tmp = tmp->prev;
		}
	
		tmp->prev = new;
	}

	new->next = tmp;

	*head = new;

	return (new);

}
