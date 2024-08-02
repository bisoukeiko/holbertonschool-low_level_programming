#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: The pointer to the address of the head of list_t list
 * @idx : The index of the list where the new node should be added
 * @n : The integer
 * Return: The address of the new node
 *         NULL if the program filed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int index;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		index = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (index == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new == NULL)
					{
						return (NULL);
					}
					new->n = n;
					new->next = head->next;
					new->prev = head;
					head->next->prev = new;
					head->next = new;
				}
				break;
			}
			head = head->next;
			index++;
		}
	}

	return (new);
}
