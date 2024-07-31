#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list
 * @head: The pointer to the address of head of list_t list
 * @n : The integer
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
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

		new->prev = last;
		last->next = new;
	}

	return (new);

}
