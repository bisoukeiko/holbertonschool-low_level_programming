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
	dlistint_t *head_t;
	dlistint_t *tmp;

	head_t = *head;

	if (head_t != NULL)
		while (head_t->prev != NULL)
		{
			head_t = head_t->prev;
		}

	index_n = 0;
	while (head_t != NULL)
	{
		if (index_n == index)
		{
			if (index == 0)
			{
				*head = head_t->next;
				(*head)->prev = NULL;
			}
			else
			{
				tmp = head_t;
			/*	tmp->next = head_t->next;*/

				if (head_t->next != NULL)
				{
					head_t->next->prev = tmp;
				}
			}

			free(head_t);
			return (1);
		}
		else
		{
			head_t = head_t->next;
			index_n++;
		}
	}

	return (-1);
}
