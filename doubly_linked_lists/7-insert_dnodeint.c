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
	unsigned int index;
	dlistint_t *new = NULL;
	dlistint_t *head = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		if (head != NULL)
		{
			while (head->prev != NULL)
			{
				head = head->prev;
			}
		}
		index = 1;
		while (head != NULL)
		{
			if (index == idx)
			{
				if (head->next == NULL)
				{
					new = add_dnodeint_end(h, n);
				}
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new == NULL)
					{
						return (NULL);
					}
					new->n = n;
					new->prev = head;
					new->next = head->next;
					head->next = new;
					head->next->prev = new;
				}
				break;
			}

			head = head->next;
			index++;
		}
 
	}
	return (new);
}
