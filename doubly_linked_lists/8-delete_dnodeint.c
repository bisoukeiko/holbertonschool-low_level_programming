#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at index of a dlistint_t
 *                            linked list
 * @head: The pointer to the address of the head of list_t list
 * @index: The index of the node that should be deleted
 * Return: 1 if program succeeded, -1 if program failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int index_n;
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (-1);
	}

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{

		while (tmp->prev != NULL)
		{
			tmp = tmp->prev;
		}

		index_n = 1;
		while (index_n < index)
		{
			if (tmp->next == NULL)
			{

				return (-1);
			}
			else
			{
				tmp = tmp->next;
				index_n++;
			}
		}

		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
	}

	return (1);
}
